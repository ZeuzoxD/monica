// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h6e0f3f36_0;
extern const VlWide<384>/*12287:0*/ VmkTb_COP__ConstPool__CONST_hd2014d94_0;

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__11(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__11\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 = 0xaaU;
    } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
                                               >> 7U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
                                           >> 7U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                                  >> 7U)));
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                              >> 7U)));
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                              >> 7U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                                          >> 7U)));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                              >> 7U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                                          >> 7U)));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                                          >> 7U)));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                                          >> 7U)));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                                          >> 7U)));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                                   >> 0x17U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                                      >> 7U)));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_man 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1 
                        >> 1U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_sign 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1 
                     >> 0x10U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_man 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage1 
                        >> 1U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_sign 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage1 
                     >> 0x10U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_man 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage1 
                        >> 1U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_sign 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage1 
                     >> 0x10U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_man 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage1 
                        >> 1U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_sign 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage1 
                     >> 0x10U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_man 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage1 
                        >> 1U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_sign 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage1 
                     >> 0x10U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_man 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage1 
                        >> 1U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_sign 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage1 
                     >> 0x10U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_man 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage1 
                        >> 1U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_sign 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage1 
                     >> 0x10U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_man 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage1 
                        >> 1U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_sign 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage1 
                     >> 0x10U));
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__active) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__active) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__active) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage__024D_IN;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__active) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage__024D_IN;
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024EN) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter__024EN))) {
            VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_buffer, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024EN), vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__024get_res, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024get_res);
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_r_ready__024EN) {
            VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_r, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output);
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage = 0x2aaaaaaaaaULL;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage = 0x2aaaaaaaaaULL;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage = 0x2aaaaaaaaaULL;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage = 0x2aaaaaaaaaULL;
        VL_ASSIGN_W(4096,vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_buffer, VmkTb_COP__ConstPool__CONST_h6e0f3f36_0);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_r, VmkTb_COP__ConstPool__CONST_hd2014d94_0);
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x73U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x73U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x73U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x73U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x74U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x74U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x74U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x74U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x75U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x75U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x75U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x75U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x76U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x76U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x76U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x76U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x77U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x77U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x77U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x77U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x78U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x78U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x78U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x78U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x10U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x10U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x10U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x10U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x79U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x79U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x79U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x79U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x11U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x11U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x11U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x11U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x12U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x12U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x12U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x12U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x13U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x13U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x13U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x13U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x14U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x14U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x14U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x14U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x15U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x15U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x15U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x15U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x16U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x16U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x16U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x16U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x17U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x17U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x17U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x17U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x80U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x80U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x80U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x80U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x18U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x18U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x18U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x18U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x81U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x81U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x81U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x81U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x19U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x19U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x19U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x19U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x82U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x82U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x82U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x82U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x72U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x72U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x72U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x72U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x73U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x73U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x73U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x73U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x74U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x74U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x74U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x74U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x75U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x75U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x75U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x75U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x76U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x76U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x76U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x76U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x77U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x77U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x77U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x77U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x78U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x78U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x78U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x78U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x10U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x10U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x10U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x10U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x79U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x79U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x79U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x79U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x11U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x11U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x11U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x11U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x12U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x12U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x12U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x12U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x13U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x13U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x13U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x13U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x14U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x14U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x14U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x14U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x15U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x15U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x15U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x15U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x16U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x16U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x16U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x16U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x7fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x7fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x17U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x17U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x17U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x17U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x80U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x80U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x80U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x80U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x18U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x18U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x18U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x18U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x81U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x81U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x81U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x81U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x19U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x19U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x19U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x19U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x82U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x82U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x82U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x82U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(9U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(9U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x72U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x72U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x72U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x72U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage1 
                          >> 1U));
    }
    if ((1U & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage1)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_input_z 
            = (0xffffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage1 
                          >> 1U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_5_4 
        = (1U & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1)) 
                 | (1U & (((0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                     >> 7U)) - (IData)(0x7fU)) 
                          >> 0xfU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__integer_part___05Fh2009 
        = (0xffffU & VL_SHIFTL_III(16,16,16, (0x8000U 
                                              | (0x7f00U 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                    << 8U))), 
                                   (0xffffU & (- ((IData)(0xfU) 
                                                  - 
                                                  ((0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241 
        = (0xffffU & (VL_SHIFTR_III(16,16,16, (0x8000U 
                                               | (0x7f00U 
                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                     << 8U))), 
                                    (0xffffU & ((IData)(0xfU) 
                                                - (
                                                   (0xffU 
                                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                       >> 7U)) 
                                                   - (IData)(0x7fU))))) 
                      + (1U & ((0x8000U | (0x7f00U 
                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                              << 8U))) 
                               >> (0xfU & (((IData)(0xfU) 
                                            - ((0xffU 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                   >> 7U)) 
                                               - (IData)(0xfU))) 
                                           - (IData)(1U)))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x1aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x1aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x1aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x1aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x1aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x1aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x1aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x1aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444, (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444, (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444, (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444, (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x69U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x69U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x69U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x69U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x70U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x70U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x70U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x70U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x71U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x71U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x71U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x71U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444, (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444, (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444, (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444, (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x69U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x69U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x69U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x69U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6aU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6aU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6bU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6bU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(3U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(4U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(4U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(5U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(5U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(6U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(6U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x6fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x6fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(7U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(7U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x70U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x70U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x70U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x70U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(8U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(8U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x71U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x71U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x7cfU >= (0x7ffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x71U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_bram__DOT__RAM
                      [(0x7ffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x71U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__elemA___05Fh30444)), (IData)(0x69U)))])
                   : 0U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__v_t_0) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_1) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_5) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_4)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_3) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_2))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_5) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_4)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_3) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_2))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[3U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_7) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_6));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[4U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_11) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_10)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_9) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_8))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[5U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_11) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_10)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_9) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_8))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[6U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_13) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_12));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[7U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_17) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_16)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_15) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_14))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[8U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_17) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_16)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_15) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_14))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[9U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_19) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_18));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0xaU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_23) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_22)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_21) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_20))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0xbU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_23) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_22)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_21) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_20))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0xcU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_25) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_24));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0xdU] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_29) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_28)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_27) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_26))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0xeU] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_29) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_28)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_27) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_26))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0xfU] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_31) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_30));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0x10U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_35) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_34)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_33) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_32))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0x11U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_35) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_34)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_33) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_32))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0x12U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_37) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_36));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0x13U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_41) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_40)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_39) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_38))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0x14U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_41) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_40)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_39) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_38))))) 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0x15U] 
        = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_43) 
            << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_42));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0x16U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_47) 
                                      << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_46)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_45) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_44))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024get_voltages[0x17U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_47) 
                                       << 0x10U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_46)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_45) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_44))))) 
                   >> 0x20U));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_47));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_47) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_46));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_46) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_45));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_45) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_44));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_44) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_43));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_43) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_42));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_42) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_41));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_41) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_40));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_40) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_39));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_39) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_38));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_38) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_37));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_37) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_36));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_36) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_35));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_35) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_34));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_34) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_33));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_33) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_32));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_32) 
                            >> 7U));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_31));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_31) 
                                        >> 7U));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_30));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_30) 
                                        >> 7U));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_29));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_29) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_28));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_28) 
                                    >> 7U));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_27));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_27) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_26));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_26) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_25));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_25) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_24));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_24) 
                                >> 7U));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_23));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_23) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_22));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_22) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_21));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_21) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_20));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_20) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_19));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_19) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_18));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_18) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_17));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_17) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_16));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_16) 
                            >> 7U));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_15));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_15) 
                                    >> 7U));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                        = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_14));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                        = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_14) 
                                    >> 7U));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_13));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_13) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_12));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_12) 
                                >> 7U));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_11));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_11) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_10));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_10) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_9));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_9) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_8));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_8) 
                            >> 7U));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_7));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_7) 
                                >> 7U));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                    = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_6));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                    = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_6) 
                                >> 7U));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_5));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_5) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_4));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_4) 
                            >> 7U));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_3));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_3) 
                            >> 7U));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
                = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_2));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
                = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_2) 
                            >> 7U));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__v_t_0) 
                        >> 7U));
    }
}
