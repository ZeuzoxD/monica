// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h6e0f3f36_0;

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__8(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__8\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 = 0xaaU;
    } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1fU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1fU] 
                                               >> 7U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1eU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1eU] 
                                           >> 7U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1dU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1dU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1cU] 
                                                  >> 7U)));
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1bU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1bU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x1aU] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x19U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x19U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x18U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x18U] 
                                              >> 7U)));
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x17U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x17U] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x16U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x16U] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x15U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x15U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x14U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x14U] 
                                              >> 7U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x13U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x13U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x12U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x12U] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x11U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x11U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x10U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0x10U] 
                                          >> 7U)));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xfU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xfU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xeU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xeU] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xdU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xdU] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xcU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xcU] 
                                              >> 7U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xbU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xbU] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xaU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0xaU] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[9U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[9U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[8U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[8U] 
                                          >> 7U)));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[7U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[7U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[6U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[6U] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[5U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[5U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[4U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[4U] 
                                          >> 7U)));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[3U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[3U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[2U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[2U] 
                                          >> 7U)));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[1U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[1U] 
                                          >> 7U)));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__issue_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0U] 
                                   >> 0x17U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_a[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_b[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_c[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__reg_d[0U] 
                                      >> 7U)));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_sign___05Fh12135 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index) 
                     >> 6U))) && (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                         ? ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
                                                    >> 0xfU))))))
                                         : ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
                                                    >> 0xfU)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_sign___05Fh12138 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index) 
                     >> 6U))) && (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                         ? ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
                                                    >> 0xfU))))))
                                         : ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
                                                    >> 0xfU)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_sign___05Fh19821 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index) 
                     >> 6U))) && (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                         ? ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
                                                    >> 0xfU))))))
                                         : ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
                                                    >> 0xfU)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_sign___05Fh19824 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index) 
                     >> 6U))) && (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                         ? ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
                                                    >> 0xfU))))))
                                         : ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
                                                    >> 0xfU)))))))));
    if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 = 0xaaU;
    } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
                                               >> 0x17U)));
                        } else {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1fU] 
                                               >> 7U)));
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1eU] 
                                           >> 7U)));
                    }
                } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1dU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1cU] 
                                                  >> 7U)));
                }
            } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1bU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x1aU] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x19U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x18U] 
                                              >> 7U)));
            }
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x17U] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x16U] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x15U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x14U] 
                                              >> 7U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x13U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x12U] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x11U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0x10U] 
                                          >> 7U)));
        }
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xfU] 
                                           >> 7U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xeU] 
                                                  >> 7U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xdU] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xcU] 
                                              >> 7U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xbU] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0xaU] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[9U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[8U] 
                                          >> 7U)));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[7U] 
                                                  >> 7U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[6U] 
                                              >> 7U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[5U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[4U] 
                                          >> 7U)));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[3U] 
                                              >> 7U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[2U] 
                                          >> 7U)));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[1U] 
                                          >> 7U)));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__issue_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
                                   >> 0x17U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_a[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_b[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_c[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__reg_d[0U] 
                                      >> 7U)));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_sign___05Fh12135 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index) 
                     >> 6U))) && (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                         ? ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
                                                    >> 0xfU))))))
                                         : ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
                                                    >> 0xfU)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_sign___05Fh12138 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index) 
                     >> 6U))) && (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                         ? ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
                                                    >> 0xfU))))))
                                         : ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
                                                    >> 0xfU)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_sign___05Fh19821 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index) 
                     >> 6U))) && (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                         ? ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                                                    >> 0xfU))))))
                                         : ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                                                    >> 0xfU)))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_sign___05Fh19824 
        = ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index) 
                     >> 6U))) && (1U & ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                         ? ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                                                    >> 0xfU))))))
                                         : ((0x10U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                                                    >> 0xfU)))))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                                                    >> 0xfU))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                                                    >> 0xfU)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                                                    >> 0xfU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))
                                                    ? 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                                                    >> 0xfU)))))))));
    if ((0x40U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 = 0x2aU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 = 0xaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 = 0xaaU;
    } else if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
            if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__issue_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
                                             << 0x10U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU] 
                                               >> 0x10U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
                                               >> 0x17U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
                                             << 9U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
                                               >> 0x17U)));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1fU]);
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1fU] 
                                               >> 7U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
                                                   >> 0x17U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1eU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1eU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1eU] 
                                           >> 7U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
                                                   >> 0x17U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1dU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1dU] 
                                           >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1cU] 
                                                  >> 7U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
                                                   >> 0x17U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1bU] 
                                           >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x1aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x1aU] 
                                                  >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x19U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x19U] 
                                                  >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x18U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x18U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x18U] 
                                              >> 7U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
                                                   >> 0x17U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x17U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x17U] 
                                           >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x16U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x16U] 
                                                  >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x15U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x15U] 
                                                  >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x14U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x14U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x14U] 
                                              >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x13U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x13U] 
                                                  >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x12U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x12U] 
                                              >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x11U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x11U] 
                                              >> 7U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0x10U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0x10U] 
                                          >> 7U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
                                                   >> 0x17U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xfU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xfU] 
                                           >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xeU] 
                                                  >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xdU] 
                                                  >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xcU] 
                                              >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xbU] 
                                                  >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0xaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0xaU] 
                                              >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[9U] 
                                              >> 7U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[8U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[8U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[8U] 
                                          >> 7U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[7U] 
                                                  >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[6U] 
                                              >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[5U] 
                                              >> 7U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[4U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[4U] 
                                          >> 7U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[3U] 
                                              >> 7U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[2U] 
                                          >> 7U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[1U] 
                                          >> 7U)));
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U] 
                                   >> 0x17U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_c[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_d[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_a[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__reg_b[0U] 
                                      >> 7U)));
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
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__pipeline_stage = 0x2aaaaaaaaaULL;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__pipeline_stage = 0x2aaaaaaaaaULL;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__pipeline_stage = 0x2aaaaaaaaaULL;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__pipeline_stage = 0x2aaaaaaaaaULL;
        VL_ASSIGN_W(4096,vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_buffer, VmkTb_COP__ConstPool__CONST_h6e0f3f36_0);
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xaU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xaU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4cU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4cU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xbU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xbU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4dU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4dU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xcU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xcU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4eU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4eU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xdU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xdU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x4fU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x4fU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xeU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xeU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x50U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x50U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x50U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x50U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0xfU) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0xfU) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x51U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x51U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x51U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x51U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x10U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x10U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x10U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x10U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x52U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x52U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x52U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x52U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x11U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x11U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x11U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x11U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x53U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x53U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x53U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x53U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x12U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x12U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x12U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x12U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x54U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x54U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x54U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x54U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__024ENA) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x13U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x13U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R 
            = ((0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOA_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x13U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xff00U & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x13U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__024ENB) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R 
            = ((0xff00U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__DOB_R)) 
               | ((0x8bfU >= (0xfffU & VL_DIV_III(18, 
                                                  (0x3ffffU 
                                                   & ((IData)(0x55U) 
                                                      + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U))))
                   ? (0xffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_bram__DOT__RAM
                      [(0xfffU & VL_DIV_III(18, (0x3ffffU 
                                                 & ((IData)(0x55U) 
                                                    + vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__elemA___05Fh24984)), (IData)(0x42U)))])
                   : 0U));
    }
}
