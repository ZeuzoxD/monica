// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_ATTR_COLD void VmkTb_COP___024root___stl_sequent__TOP__1(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___stl_sequent__TOP__1\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x200U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index) 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17cU] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x179U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x178U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x177U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x176U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x175U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x174U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x173U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x172U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x171U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x170U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16cU] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x169U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x168U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x167U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x166U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x165U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x164U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x163U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x162U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x161U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x160U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15cU] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x159U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x158U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x157U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x156U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x155U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x154U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x153U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x152U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x151U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x150U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14cU] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x149U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x148U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x147U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x146U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x145U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x144U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x143U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x142U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x141U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x140U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13cU] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x139U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x138U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x137U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x136U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x135U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x134U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x133U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x132U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x131U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x130U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12cU] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x129U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x128U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x127U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x126U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x125U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x124U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x123U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x122U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x121U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x120U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11cU] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x119U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x118U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x117U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x116U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x115U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x114U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x113U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x112U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x111U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x110U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10fU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10eU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10dU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10cU] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10bU] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10aU] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x109U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x108U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x107U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x106U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x105U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x104U] 
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
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x103U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x102U] 
                                                          >> 0xfU)))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x101U] 
                                                          >> 0xfU))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))
                                                          ? 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x100U] 
                                                          >> 0xfU))))))))))));
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
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                            = (1U & 
                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU] 
                                                >> 0x1fU));
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
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                            = (1U & 
                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xffU] 
                                                >> 0xfU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU] 
                                                 >> 0x1fU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfeU] 
                                                 >> 0xfU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU] 
                                                 >> 0x1fU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfdU] 
                                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfcU] 
                                             >> 0xfU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU] 
                                                 >> 0x1fU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfbU] 
                                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfaU] 
                                             >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf9U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf8U] 
                                         >> 0xfU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U] 
                                                 >> 0x1fU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf7U] 
                                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf6U] 
                                             >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf5U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf4U] 
                                         >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf3U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf2U] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf1U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xf0U] 
                                     >> 0xfU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU] 
                                                 >> 0x1fU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xefU] 
                                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeeU] 
                                             >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xedU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xecU] 
                                         >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xebU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeaU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe9U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe8U] 
                                     >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe7U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe6U] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe5U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe4U] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe2U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xe0U] 
                                 >> 0xfU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU] 
                                                 >> 0x1fU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdfU] 
                                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdeU] 
                                             >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xddU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdcU] 
                                         >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdbU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdaU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd9U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd8U] 
                                     >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd7U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd6U] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd5U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd4U] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd2U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xd0U] 
                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcfU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xceU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcdU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xccU] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcbU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcaU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc9U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc8U] 
                                 >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc7U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc6U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc5U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc4U] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc2U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc1U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xc0U] 
                             >> 0xfU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU] 
                                                 >> 0x1fU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbfU] 
                                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbeU] 
                                             >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbdU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbcU] 
                                         >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbbU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbaU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb9U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb8U] 
                                     >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb7U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb6U] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb5U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb4U] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb2U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xb0U] 
                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xafU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaeU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xadU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xacU] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xabU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaaU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa9U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa8U] 
                                 >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa7U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa6U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa5U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa4U] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa2U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa1U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xa0U] 
                             >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9eU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9cU] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x9aU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x99U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x98U] 
                                 >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x97U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x96U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x95U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x94U] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x93U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x92U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x91U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x90U] 
                             >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8eU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8cU] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x8aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x89U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x88U] 
                             >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x87U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x86U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x85U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x84U] 
                             >> 0xfU));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x83U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x82U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x81U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x80U] 
                         >> 0xfU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU] 
                                                 >> 0x1fU));
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
                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7fU] 
                                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7eU] 
                                             >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7dU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7cU] 
                                         >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7bU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x7aU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x79U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x78U] 
                                     >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x77U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x76U] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x75U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x74U] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x73U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x72U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x71U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x70U] 
                                 >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6eU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6cU] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x6aU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x69U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x68U] 
                                 >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x67U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x66U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x65U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x64U] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x63U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x62U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x61U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x60U] 
                             >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5eU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5cU] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x5aU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x59U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x58U] 
                                 >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x57U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x56U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x55U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x54U] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x53U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x52U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x51U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x50U] 
                             >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4eU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4cU] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x4aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x49U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x48U] 
                             >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x47U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x46U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x45U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x44U] 
                             >> 0xfU));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x43U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x42U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x41U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x40U] 
                         >> 0xfU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                             >> 0x1fU));
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
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                             >> 0xfU));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU] 
                                                   >> 7U)));
                                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3fU]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3eU] 
                                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3dU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3cU] 
                                     >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3bU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x3aU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x39U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x38U] 
                                 >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x37U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x36U] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x35U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x34U] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x33U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x32U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x31U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x30U] 
                             >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2eU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2cU] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x2aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x29U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x28U] 
                             >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x27U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x26U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x25U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x24U] 
                             >> 0xfU));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x23U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x22U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x21U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x20U] 
                         >> 0xfU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                         >> 0x1fU));
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
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                         >> 0xfU));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                             << 0x19U) 
                                            | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU] 
                                               >> 7U)));
                            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1fU]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1eU] 
                                     >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1dU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1cU] 
                                 >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1bU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x1aU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x19U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x18U] 
                             >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x17U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x16U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x15U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x14U] 
                             >> 0xfU));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x13U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x12U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x11U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0x10U] 
                         >> 0xfU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                     >> 0x1fU));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xfU]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xeU]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xdU]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xcU] 
                             >> 0xfU));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xbU]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0xaU]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[9U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[8U] 
                         >> 0xfU));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[7U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[6U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[5U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[4U] 
                         >> 0xfU));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[3U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[2U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[1U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                                      >> 0x10U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_b[0U]);
    }
}
