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
    if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx))) {
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_60 
        = ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           | (0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_64 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & 0x2aU);
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x172U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x172U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x172U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x172U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x162U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x162U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x162U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x162U] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x152U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x152U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x152U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x152U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x142U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x142U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x142U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x142U] 
                                              >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x132U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x132U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x132U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x132U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x122U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x122U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x122U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x122U] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x112U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x112U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x112U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x112U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x102U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x102U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x102U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x102U] 
                                          >> 0x10U)));
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
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
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16aU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15aU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14aU] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13aU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12aU] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x11aU] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x10aU] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x179U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x169U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x159U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x149U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x139U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x129U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x119U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x109U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x178U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x168U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x158U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x148U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x138U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x128U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x118U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x108U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x177U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x167U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x157U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x147U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x137U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x127U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x117U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x107U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x176U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x166U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x156U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x146U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x136U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x126U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x116U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x106U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x175U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x165U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x155U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x145U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x135U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x125U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x115U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x105U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x174U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x164U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x154U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x144U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x134U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x124U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x114U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x104U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U] 
                                                     >> 0x1fU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x173U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x163U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x153U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x143U] 
                                                     >> 0xfU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x133U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x123U] 
                                                     >> 0xfU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x113U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x103U] 
                                                     >> 0xfU)))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
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
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x172U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x162U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x152U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x142U] 
                                                     >> 0x1fU)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x132U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x122U] 
                                                     >> 0x1fU))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))
                                                     ? 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x112U] 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x102U] 
                                                     >> 0x1fU)))))));
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xffU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfdU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfcU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfaU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf9U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf8U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf6U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf5U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xf2U] 
                                                  >> 0x10U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xefU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeeU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xedU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xecU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xebU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeaU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe9U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe8U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe7U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe6U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe5U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe2U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe2U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xe2U] 
                                                  >> 0x10U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdfU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdeU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xddU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdbU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd8U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd7U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xd2U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcfU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xceU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcdU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xccU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcbU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc8U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc7U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xc2U] 
                                              >> 0x10U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbfU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbeU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbdU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbcU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbbU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb8U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb7U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xb2U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xafU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaeU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xadU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xacU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xabU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaaU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa8U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa7U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa6U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa5U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa2U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa2U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xa2U] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x9aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x99U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x98U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x97U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x96U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x95U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x94U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x93U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x92U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x92U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x92U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x92U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x92U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x8aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x89U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x88U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x87U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x86U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x85U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x84U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x83U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x82U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x82U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x82U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x82U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x82U] 
                                          >> 0x10U)));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x7aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x79U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x78U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x77U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x76U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x75U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x74U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x73U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x72U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x72U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x72U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x72U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x72U] 
                                              >> 0x10U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x6aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x69U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x68U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x67U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x66U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x65U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x64U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x63U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x62U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x62U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x62U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x62U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x62U] 
                                              >> 0x10U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x5aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x59U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x58U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x57U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x56U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x55U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x54U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x53U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x52U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x52U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x52U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x52U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x52U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x4aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x49U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x48U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x47U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x46U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x45U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x44U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x43U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x42U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x42U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x42U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x42U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x42U] 
                                          >> 0x10U)));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x3aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x39U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x38U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x37U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x36U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x35U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x34U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x33U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x32U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x32U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x32U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x32U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x32U] 
                                          >> 0x10U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x2aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x29U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x28U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x27U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x26U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x25U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x24U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x23U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x22U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x22U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x22U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x22U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x22U] 
                                          >> 0x10U)));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1fU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1eU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1dU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1cU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1bU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x1aU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x19U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x18U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x17U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x16U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x15U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x14U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x13U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0x12U] 
                                      >> 0x10U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008286_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981087_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xfU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x981910_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x982733_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xeU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x983556_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x984379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xdU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x985202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xcU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x986848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x987671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xbU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x988494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x989317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[0xaU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x990963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[9U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x991786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x992609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[8U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x993432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x994255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x995901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x996724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x997547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x998370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x999193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x000839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x001662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww[2U] 
                                      >> 0x10U)));
    }
}
