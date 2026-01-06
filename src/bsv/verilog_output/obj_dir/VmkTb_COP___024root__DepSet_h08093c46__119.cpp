// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

extern const VlWide<384>/*12287:0*/ VmkTb_COP__ConstPool__CONST_h27732c4d_0;

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__122(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__122\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<384>/*12287:0*/ __Vtemp_1;
    VlWide<384>/*12287:0*/ __Vtemp_2;
    VlWide<384>/*12287:0*/ __Vtemp_3;
    VlWide<384>/*12287:0*/ __Vtemp_4;
    VlWide<384>/*12287:0*/ __Vtemp_5;
    VlWide<384>/*12287:0*/ __Vtemp_6;
    VlWide<384>/*12287:0*/ __Vtemp_7;
    VlWide<384>/*12287:0*/ __Vtemp_8;
    VlWide<384>/*12287:0*/ __Vtemp_9;
    VlWide<384>/*12287:0*/ __Vtemp_10;
    VlWide<384>/*12287:0*/ __Vtemp_11;
    VlWide<384>/*12287:0*/ __Vtemp_12;
    VlWide<384>/*12287:0*/ __Vtemp_13;
    VlWide<384>/*12287:0*/ __Vtemp_14;
    VlWide<384>/*12287:0*/ __Vtemp_15;
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20807[0U] 
        = ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xcU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xcU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xcU])));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x172U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20807[(__Vilp1 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20802[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38693[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[7U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[7U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[7U])));
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38693[(__Vilp2 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38687[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40597[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[7U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[7U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[7U])));
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40597[(__Vilp3 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40592[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29767[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[7U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[7U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[7U])));
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29767[(__Vilp4 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29761[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31680[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[7U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[7U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[7U])));
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31680[(__Vilp5 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31675[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16968[0U] 
        = ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0xbU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0xbU])));
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x173U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16968[(__Vilp6 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16963[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18890[0U] 
        = ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0xbU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0xbU])));
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x173U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18890[(__Vilp7 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18885[__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15024[0U] 
        = ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0xbU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0xbU])));
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x173U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15024[(__Vilp8 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15017[__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22734[0U] 
        = ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0xbU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0xbU])));
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x173U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22734[(__Vilp9 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22729[__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20812[0U] 
        = ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xbU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xbU])));
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x173U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20812[(__Vilp10 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20807[__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38698[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[6U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[6U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[6U])));
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38698[(__Vilp11 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38693[__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40602[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[6U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[6U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[6U])));
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40602[(__Vilp12 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40597[__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29772[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[6U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[6U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[6U])));
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29772[(__Vilp13 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29767[__Vilp13];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31685[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[6U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[6U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[6U])));
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31685[(__Vilp14 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31680[__Vilp14];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16973[0U] 
        = ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0xaU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0xaU])));
    IData/*31:0*/ __Vilp15;
    __Vilp15 = 0U;
    while ((__Vilp15 <= 0x174U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16973[(__Vilp15 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16968[__Vilp15];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18895[0U] 
        = ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0xaU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0xaU])));
    IData/*31:0*/ __Vilp16;
    __Vilp16 = 0U;
    while ((__Vilp16 <= 0x174U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18895[(__Vilp16 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18890[__Vilp16];
        __Vilp16 = ((IData)(1U) + __Vilp16);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15031[0U] 
        = ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0xaU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0xaU])));
    IData/*31:0*/ __Vilp17;
    __Vilp17 = 0U;
    while ((__Vilp17 <= 0x174U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15031[(__Vilp17 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15024[__Vilp17];
        __Vilp17 = ((IData)(1U) + __Vilp17);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22739[0U] 
        = ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0xaU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0xaU])));
    IData/*31:0*/ __Vilp18;
    __Vilp18 = 0U;
    while ((__Vilp18 <= 0x174U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22739[(__Vilp18 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22734[__Vilp18];
        __Vilp18 = ((IData)(1U) + __Vilp18);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20817[0U] 
        = ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xaU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0xaU])));
    IData/*31:0*/ __Vilp19;
    __Vilp19 = 0U;
    while ((__Vilp19 <= 0x174U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20817[(__Vilp19 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20812[__Vilp19];
        __Vilp19 = ((IData)(1U) + __Vilp19);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38703[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[5U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[5U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[5U])));
    IData/*31:0*/ __Vilp20;
    __Vilp20 = 0U;
    while ((__Vilp20 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38703[(__Vilp20 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38698[__Vilp20];
        __Vilp20 = ((IData)(1U) + __Vilp20);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40607[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[5U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[5U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[5U])));
    IData/*31:0*/ __Vilp21;
    __Vilp21 = 0U;
    while ((__Vilp21 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40607[(__Vilp21 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40602[__Vilp21];
        __Vilp21 = ((IData)(1U) + __Vilp21);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29777[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[5U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[5U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[5U])));
    IData/*31:0*/ __Vilp22;
    __Vilp22 = 0U;
    while ((__Vilp22 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29777[(__Vilp22 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29772[__Vilp22];
        __Vilp22 = ((IData)(1U) + __Vilp22);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31690[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[5U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[5U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[5U])));
    IData/*31:0*/ __Vilp23;
    __Vilp23 = 0U;
    while ((__Vilp23 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31690[(__Vilp23 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31685[__Vilp23];
        __Vilp23 = ((IData)(1U) + __Vilp23);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16978[0U] 
        = ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[9U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[9U])));
    IData/*31:0*/ __Vilp24;
    __Vilp24 = 0U;
    while ((__Vilp24 <= 0x175U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16978[(__Vilp24 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16973[__Vilp24];
        __Vilp24 = ((IData)(1U) + __Vilp24);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18900[0U] 
        = ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[9U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[9U])));
    IData/*31:0*/ __Vilp25;
    __Vilp25 = 0U;
    while ((__Vilp25 <= 0x175U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18900[(__Vilp25 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18895[__Vilp25];
        __Vilp25 = ((IData)(1U) + __Vilp25);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15038[0U] 
        = ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[9U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[9U])));
    IData/*31:0*/ __Vilp26;
    __Vilp26 = 0U;
    while ((__Vilp26 <= 0x175U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15038[(__Vilp26 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15031[__Vilp26];
        __Vilp26 = ((IData)(1U) + __Vilp26);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22744[0U] 
        = ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[9U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[9U])));
    IData/*31:0*/ __Vilp27;
    __Vilp27 = 0U;
    while ((__Vilp27 <= 0x175U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22744[(__Vilp27 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22739[__Vilp27];
        __Vilp27 = ((IData)(1U) + __Vilp27);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20822[0U] 
        = ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[9U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[9U])));
    IData/*31:0*/ __Vilp28;
    __Vilp28 = 0U;
    while ((__Vilp28 <= 0x175U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20822[(__Vilp28 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20817[__Vilp28];
        __Vilp28 = ((IData)(1U) + __Vilp28);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38708[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[4U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[4U])));
    IData/*31:0*/ __Vilp29;
    __Vilp29 = 0U;
    while ((__Vilp29 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38708[(__Vilp29 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38703[__Vilp29];
        __Vilp29 = ((IData)(1U) + __Vilp29);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40612[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[4U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[4U])));
    IData/*31:0*/ __Vilp30;
    __Vilp30 = 0U;
    while ((__Vilp30 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40612[(__Vilp30 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40607[__Vilp30];
        __Vilp30 = ((IData)(1U) + __Vilp30);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29782[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[4U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[4U])));
    IData/*31:0*/ __Vilp31;
    __Vilp31 = 0U;
    while ((__Vilp31 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29782[(__Vilp31 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29777[__Vilp31];
        __Vilp31 = ((IData)(1U) + __Vilp31);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31695[0U] 
        = ((((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[4U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[4U])));
    IData/*31:0*/ __Vilp32;
    __Vilp32 = 0U;
    while ((__Vilp32 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31695[(__Vilp32 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31690[__Vilp32];
        __Vilp32 = ((IData)(1U) + __Vilp32);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16983[0U] 
        = ((((0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[8U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[8U])));
    IData/*31:0*/ __Vilp33;
    __Vilp33 = 0U;
    while ((__Vilp33 <= 0x176U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16983[(__Vilp33 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16978[__Vilp33];
        __Vilp33 = ((IData)(1U) + __Vilp33);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18905[0U] 
        = ((((0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[8U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[8U])));
    IData/*31:0*/ __Vilp34;
    __Vilp34 = 0U;
    while ((__Vilp34 <= 0x176U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18905[(__Vilp34 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18900[__Vilp34];
        __Vilp34 = ((IData)(1U) + __Vilp34);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15045[0U] 
        = ((((0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[8U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[8U])));
    IData/*31:0*/ __Vilp35;
    __Vilp35 = 0U;
    while ((__Vilp35 <= 0x176U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15045[(__Vilp35 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15038[__Vilp35];
        __Vilp35 = ((IData)(1U) + __Vilp35);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22749[0U] 
        = ((((0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[8U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[8U])));
    IData/*31:0*/ __Vilp36;
    __Vilp36 = 0U;
    while ((__Vilp36 <= 0x176U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22749[(__Vilp36 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22744[__Vilp36];
        __Vilp36 = ((IData)(1U) + __Vilp36);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20827[0U] 
        = ((((0x12U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[8U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[8U])));
    IData/*31:0*/ __Vilp37;
    __Vilp37 = 0U;
    while ((__Vilp37 <= 0x176U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20827[(__Vilp37 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20822[__Vilp37];
        __Vilp37 = ((IData)(1U) + __Vilp37);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38714[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[3U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[3U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[3U])));
    IData/*31:0*/ __Vilp38;
    __Vilp38 = 0U;
    while ((__Vilp38 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38714[(__Vilp38 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38708[__Vilp38];
        __Vilp38 = ((IData)(1U) + __Vilp38);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40617[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[3U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[3U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[3U])));
    IData/*31:0*/ __Vilp39;
    __Vilp39 = 0U;
    while ((__Vilp39 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40617[(__Vilp39 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40612[__Vilp39];
        __Vilp39 = ((IData)(1U) + __Vilp39);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29788[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[3U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[3U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[3U])));
    IData/*31:0*/ __Vilp40;
    __Vilp40 = 0U;
    while ((__Vilp40 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29788[(__Vilp40 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29782[__Vilp40];
        __Vilp40 = ((IData)(1U) + __Vilp40);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31700[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[3U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[3U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[3U])));
    IData/*31:0*/ __Vilp41;
    __Vilp41 = 0U;
    while ((__Vilp41 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31700[(__Vilp41 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31695[__Vilp41];
        __Vilp41 = ((IData)(1U) + __Vilp41);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16988[0U] 
        = ((((0x10U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[7U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[7U])));
    IData/*31:0*/ __Vilp42;
    __Vilp42 = 0U;
    while ((__Vilp42 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16988[(__Vilp42 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16983[__Vilp42];
        __Vilp42 = ((IData)(1U) + __Vilp42);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18910[0U] 
        = ((((0x10U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[7U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[7U])));
    IData/*31:0*/ __Vilp43;
    __Vilp43 = 0U;
    while ((__Vilp43 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18910[(__Vilp43 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18905[__Vilp43];
        __Vilp43 = ((IData)(1U) + __Vilp43);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15052[0U] 
        = ((((0x10U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[7U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[7U])));
    IData/*31:0*/ __Vilp44;
    __Vilp44 = 0U;
    while ((__Vilp44 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15052[(__Vilp44 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15045[__Vilp44];
        __Vilp44 = ((IData)(1U) + __Vilp44);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22754[0U] 
        = ((((0x10U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[7U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[7U])));
    IData/*31:0*/ __Vilp45;
    __Vilp45 = 0U;
    while ((__Vilp45 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22754[(__Vilp45 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22749[__Vilp45];
        __Vilp45 = ((IData)(1U) + __Vilp45);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20832[0U] 
        = ((((0x10U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[7U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[7U])));
    IData/*31:0*/ __Vilp46;
    __Vilp46 = 0U;
    while ((__Vilp46 <= 0x177U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20832[(__Vilp46 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20827[__Vilp46];
        __Vilp46 = ((IData)(1U) + __Vilp46);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38719[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[2U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[2U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[2U])));
    IData/*31:0*/ __Vilp47;
    __Vilp47 = 0U;
    while ((__Vilp47 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38719[(__Vilp47 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38714[__Vilp47];
        __Vilp47 = ((IData)(1U) + __Vilp47);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40622[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[2U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[2U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[2U])));
    IData/*31:0*/ __Vilp48;
    __Vilp48 = 0U;
    while ((__Vilp48 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40622[(__Vilp48 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40617[__Vilp48];
        __Vilp48 = ((IData)(1U) + __Vilp48);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29793[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[2U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[2U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[2U])));
    IData/*31:0*/ __Vilp49;
    __Vilp49 = 0U;
    while ((__Vilp49 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29793[(__Vilp49 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29788[__Vilp49];
        __Vilp49 = ((IData)(1U) + __Vilp49);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31705[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[2U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[2U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[2U])));
    IData/*31:0*/ __Vilp50;
    __Vilp50 = 0U;
    while ((__Vilp50 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31705[(__Vilp50 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31700[__Vilp50];
        __Vilp50 = ((IData)(1U) + __Vilp50);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16993[0U] 
        = ((((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[6U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[6U])));
    IData/*31:0*/ __Vilp51;
    __Vilp51 = 0U;
    while ((__Vilp51 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16993[(__Vilp51 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16988[__Vilp51];
        __Vilp51 = ((IData)(1U) + __Vilp51);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18915[0U] 
        = ((((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[6U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[6U])));
    IData/*31:0*/ __Vilp52;
    __Vilp52 = 0U;
    while ((__Vilp52 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18915[(__Vilp52 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18910[__Vilp52];
        __Vilp52 = ((IData)(1U) + __Vilp52);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15059[0U] 
        = ((((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[6U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[6U])));
    IData/*31:0*/ __Vilp53;
    __Vilp53 = 0U;
    while ((__Vilp53 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15059[(__Vilp53 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15052[__Vilp53];
        __Vilp53 = ((IData)(1U) + __Vilp53);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22759[0U] 
        = ((((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[6U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[6U])));
    IData/*31:0*/ __Vilp54;
    __Vilp54 = 0U;
    while ((__Vilp54 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22759[(__Vilp54 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22754[__Vilp54];
        __Vilp54 = ((IData)(1U) + __Vilp54);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20837[0U] 
        = ((((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[6U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[6U])));
    IData/*31:0*/ __Vilp55;
    __Vilp55 = 0U;
    while ((__Vilp55 <= 0x178U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20837[(__Vilp55 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20832[__Vilp55];
        __Vilp55 = ((IData)(1U) + __Vilp55);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38724[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[1U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[1U])));
    IData/*31:0*/ __Vilp56;
    __Vilp56 = 0U;
    while ((__Vilp56 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38724[(__Vilp56 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38719[__Vilp56];
        __Vilp56 = ((IData)(1U) + __Vilp56);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40627[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[1U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[1U])));
    IData/*31:0*/ __Vilp57;
    __Vilp57 = 0U;
    while ((__Vilp57 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40627[(__Vilp57 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40622[__Vilp57];
        __Vilp57 = ((IData)(1U) + __Vilp57);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29798[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[1U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[1U])));
    IData/*31:0*/ __Vilp58;
    __Vilp58 = 0U;
    while ((__Vilp58 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29798[(__Vilp58 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29793[__Vilp58];
        __Vilp58 = ((IData)(1U) + __Vilp58);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31710[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[1U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[1U])));
    IData/*31:0*/ __Vilp59;
    __Vilp59 = 0U;
    while ((__Vilp59 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31710[(__Vilp59 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31705[__Vilp59];
        __Vilp59 = ((IData)(1U) + __Vilp59);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16998[0U] 
        = ((((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[5U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[5U])));
    IData/*31:0*/ __Vilp60;
    __Vilp60 = 0U;
    while ((__Vilp60 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16998[(__Vilp60 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16993[__Vilp60];
        __Vilp60 = ((IData)(1U) + __Vilp60);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18920[0U] 
        = ((((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[5U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[5U])));
    IData/*31:0*/ __Vilp61;
    __Vilp61 = 0U;
    while ((__Vilp61 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18920[(__Vilp61 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18915[__Vilp61];
        __Vilp61 = ((IData)(1U) + __Vilp61);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15066[0U] 
        = ((((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[5U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[5U])));
    IData/*31:0*/ __Vilp62;
    __Vilp62 = 0U;
    while ((__Vilp62 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15066[(__Vilp62 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15059[__Vilp62];
        __Vilp62 = ((IData)(1U) + __Vilp62);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22764[0U] 
        = ((((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[5U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[5U])));
    IData/*31:0*/ __Vilp63;
    __Vilp63 = 0U;
    while ((__Vilp63 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22764[(__Vilp63 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22759[__Vilp63];
        __Vilp63 = ((IData)(1U) + __Vilp63);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20842[0U] 
        = ((((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[5U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[5U])));
    IData/*31:0*/ __Vilp64;
    __Vilp64 = 0U;
    while ((__Vilp64 <= 0x179U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20842[(__Vilp64 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20837[__Vilp64];
        __Vilp64 = ((IData)(1U) + __Vilp64);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1__024D_IN[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0U])));
    IData/*31:0*/ __Vilp65;
    __Vilp65 = 0U;
    while ((__Vilp65 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1__024D_IN[(__Vilp65 
                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38724[__Vilp65];
        __Vilp65 = ((IData)(1U) + __Vilp65);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2__024D_IN[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0U])));
    IData/*31:0*/ __Vilp66;
    __Vilp66 = 0U;
    while ((__Vilp66 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2__024D_IN[(__Vilp66 
                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d40627[__Vilp66];
        __Vilp66 = ((IData)(1U) + __Vilp66);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024D_IN[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0U])));
    IData/*31:0*/ __Vilp67;
    __Vilp67 = 0U;
    while ((__Vilp67 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024D_IN[(__Vilp67 
                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29798[__Vilp67];
        __Vilp67 = ((IData)(1U) + __Vilp67);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2__024D_IN[0U] 
        = ((((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0U])));
    IData/*31:0*/ __Vilp68;
    __Vilp68 = 0U;
    while ((__Vilp68 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2__024D_IN[(__Vilp68 
                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d31710[__Vilp68];
        __Vilp68 = ((IData)(1U) + __Vilp68);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17003[0U] 
        = ((((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[4U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[4U])));
    IData/*31:0*/ __Vilp69;
    __Vilp69 = 0U;
    while ((__Vilp69 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17003[(__Vilp69 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16998[__Vilp69];
        __Vilp69 = ((IData)(1U) + __Vilp69);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18925[0U] 
        = ((((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[4U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[4U])));
    IData/*31:0*/ __Vilp70;
    __Vilp70 = 0U;
    while ((__Vilp70 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18925[(__Vilp70 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18920[__Vilp70];
        __Vilp70 = ((IData)(1U) + __Vilp70);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15073[0U] 
        = ((((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[4U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[4U])));
    IData/*31:0*/ __Vilp71;
    __Vilp71 = 0U;
    while ((__Vilp71 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15073[(__Vilp71 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15066[__Vilp71];
        __Vilp71 = ((IData)(1U) + __Vilp71);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22769[0U] 
        = ((((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[4U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[4U])));
    IData/*31:0*/ __Vilp72;
    __Vilp72 = 0U;
    while ((__Vilp72 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22769[(__Vilp72 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22764[__Vilp72];
        __Vilp72 = ((IData)(1U) + __Vilp72);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20847[0U] 
        = ((((0xaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[4U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[4U])));
    IData/*31:0*/ __Vilp73;
    __Vilp73 = 0U;
    while ((__Vilp73 <= 0x17aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20847[(__Vilp73 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20842[__Vilp73];
        __Vilp73 = ((IData)(1U) + __Vilp73);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17008[0U] 
        = ((((8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[3U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[3U])));
    IData/*31:0*/ __Vilp74;
    __Vilp74 = 0U;
    while ((__Vilp74 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17008[(__Vilp74 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17003[__Vilp74];
        __Vilp74 = ((IData)(1U) + __Vilp74);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18930[0U] 
        = ((((8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[3U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[3U])));
    IData/*31:0*/ __Vilp75;
    __Vilp75 = 0U;
    while ((__Vilp75 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18930[(__Vilp75 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18925[__Vilp75];
        __Vilp75 = ((IData)(1U) + __Vilp75);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15080[0U] 
        = ((((8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[3U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[3U])));
    IData/*31:0*/ __Vilp76;
    __Vilp76 = 0U;
    while ((__Vilp76 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15080[(__Vilp76 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15073[__Vilp76];
        __Vilp76 = ((IData)(1U) + __Vilp76);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22774[0U] 
        = ((((8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[3U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[3U])));
    IData/*31:0*/ __Vilp77;
    __Vilp77 = 0U;
    while ((__Vilp77 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22774[(__Vilp77 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22769[__Vilp77];
        __Vilp77 = ((IData)(1U) + __Vilp77);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20852[0U] 
        = ((((8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[3U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[3U])));
    IData/*31:0*/ __Vilp78;
    __Vilp78 = 0U;
    while ((__Vilp78 <= 0x17bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20852[(__Vilp78 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20847[__Vilp78];
        __Vilp78 = ((IData)(1U) + __Vilp78);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17013[0U] 
        = ((((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[2U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[2U])));
    IData/*31:0*/ __Vilp79;
    __Vilp79 = 0U;
    while ((__Vilp79 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17013[(__Vilp79 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17008[__Vilp79];
        __Vilp79 = ((IData)(1U) + __Vilp79);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18935[0U] 
        = ((((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[2U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[2U])));
    IData/*31:0*/ __Vilp80;
    __Vilp80 = 0U;
    while ((__Vilp80 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18935[(__Vilp80 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18930[__Vilp80];
        __Vilp80 = ((IData)(1U) + __Vilp80);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15087[0U] 
        = ((((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[2U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[2U])));
    IData/*31:0*/ __Vilp81;
    __Vilp81 = 0U;
    while ((__Vilp81 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15087[(__Vilp81 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15080[__Vilp81];
        __Vilp81 = ((IData)(1U) + __Vilp81);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22779[0U] 
        = ((((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[2U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[2U])));
    IData/*31:0*/ __Vilp82;
    __Vilp82 = 0U;
    while ((__Vilp82 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22779[(__Vilp82 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22774[__Vilp82];
        __Vilp82 = ((IData)(1U) + __Vilp82);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20857[0U] 
        = ((((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[2U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[2U])));
    IData/*31:0*/ __Vilp83;
    __Vilp83 = 0U;
    while ((__Vilp83 <= 0x17cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20857[(__Vilp83 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20852[__Vilp83];
        __Vilp83 = ((IData)(1U) + __Vilp83);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17018[0U] 
        = ((((4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[1U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[1U])));
    IData/*31:0*/ __Vilp84;
    __Vilp84 = 0U;
    while ((__Vilp84 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17018[(__Vilp84 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17013[__Vilp84];
        __Vilp84 = ((IData)(1U) + __Vilp84);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18940[0U] 
        = ((((4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[1U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[1U])));
    IData/*31:0*/ __Vilp85;
    __Vilp85 = 0U;
    while ((__Vilp85 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18940[(__Vilp85 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18935[__Vilp85];
        __Vilp85 = ((IData)(1U) + __Vilp85);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15094[0U] 
        = ((((4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[1U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[1U])));
    IData/*31:0*/ __Vilp86;
    __Vilp86 = 0U;
    while ((__Vilp86 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15094[(__Vilp86 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15087[__Vilp86];
        __Vilp86 = ((IData)(1U) + __Vilp86);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22784[0U] 
        = ((((4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[1U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[1U])));
    IData/*31:0*/ __Vilp87;
    __Vilp87 = 0U;
    while ((__Vilp87 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22784[(__Vilp87 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22779[__Vilp87];
        __Vilp87 = ((IData)(1U) + __Vilp87);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20862[0U] 
        = ((((4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[1U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[1U])));
    IData/*31:0*/ __Vilp88;
    __Vilp88 = 0U;
    while ((__Vilp88 <= 0x17dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20862[(__Vilp88 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20857[__Vilp88];
        __Vilp88 = ((IData)(1U) + __Vilp88);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_aa__024write_1___05FVAL_1[0U] 
        = ((((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0U])));
    IData/*31:0*/ __Vilp89;
    __Vilp89 = 0U;
    while ((__Vilp89 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_aa__024write_1___05FVAL_1[(__Vilp89 
                                                                              + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d17018[__Vilp89];
        __Vilp89 = ((IData)(1U) + __Vilp89);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_bb__024write_1___05FVAL_1[0U] 
        = ((((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0U])));
    IData/*31:0*/ __Vilp90;
    __Vilp90 = 0U;
    while ((__Vilp90 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_bb__024write_1___05FVAL_1[(__Vilp90 
                                                                              + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18940[__Vilp90];
        __Vilp90 = ((IData)(1U) + __Vilp90);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_pp__024write_1___05FVAL_1[0U] 
        = ((((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0U])));
    IData/*31:0*/ __Vilp91;
    __Vilp91 = 0U;
    while ((__Vilp91 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_pp__024write_1___05FVAL_1[(__Vilp91 
                                                                              + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d15094[__Vilp91];
        __Vilp91 = ((IData)(1U) + __Vilp91);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_time_decay__024write_1___05FVAL_1[0U] 
        = ((((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0U])));
    IData/*31:0*/ __Vilp92;
    __Vilp92 = 0U;
    while ((__Vilp92 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_time_decay__024write_1___05FVAL_1[(__Vilp92 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d22784[__Vilp92];
        __Vilp92 = ((IData)(1U) + __Vilp92);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_time_first__024write_1___05FVAL_1[0U] 
        = ((((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0U])));
    IData/*31:0*/ __Vilp93;
    __Vilp93 = 0U;
    while ((__Vilp93 <= 0x17eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_time_first__024write_1___05FVAL_1[(__Vilp93 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20862[__Vilp93];
        __Vilp93 = ((IData)(1U) + __Vilp93);
    }
    VL_SEL_WWII(12272,12288, __Vtemp_1, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, 0U, 0x2ff0U);
    VL_AND_W(384, __Vtemp_2, VmkTb_COP__ConstPool__CONST_h27732c4d_0, __Vtemp_1);
    VL_CONCAT_WIW(12288,16,12272, __Vtemp_3, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R), __Vtemp_2);
    VL_SEL_WWII(12272,12288, __Vtemp_4, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, 0U, 0x2ff0U);
    VL_AND_W(384, __Vtemp_5, VmkTb_COP__ConstPool__CONST_h27732c4d_0, __Vtemp_4);
    VL_CONCAT_WIW(12288,16,12272, __Vtemp_6, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R), __Vtemp_5);
    VL_SEL_WWII(12272,12288, __Vtemp_7, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, 0U, 0x2ff0U);
    VL_AND_W(384, __Vtemp_8, VmkTb_COP__ConstPool__CONST_h27732c4d_0, __Vtemp_7);
    VL_CONCAT_WIW(12288,16,12272, __Vtemp_9, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R), __Vtemp_8);
    VL_SEL_WWII(12272,12288, __Vtemp_10, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, 0U, 0x2ff0U);
    VL_AND_W(384, __Vtemp_11, VmkTb_COP__ConstPool__CONST_h27732c4d_0, __Vtemp_10);
    VL_CONCAT_WIW(12288,16,12272, __Vtemp_12, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R), __Vtemp_11);
    VL_SEL_WWII(12272,12288, __Vtemp_13, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, 0U, 0x2ff0U);
    VL_AND_W(384, __Vtemp_14, VmkTb_COP__ConstPool__CONST_h27732c4d_0, __Vtemp_13);
    VL_CONCAT_WIW(12288,16,12272, __Vtemp_15, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R), __Vtemp_14);
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) {
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa__024D_IN, vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_aa__024write_1___05FVAL_1);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb__024D_IN, vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_bb__024write_1___05FVAL_1);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp__024D_IN, vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_pp__024write_1___05FVAL_1);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay__024D_IN, vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_time_decay__024write_1___05FVAL_1);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first__024D_IN, vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_time_first__024write_1___05FVAL_1);
    } else {
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa__024D_IN, __Vtemp_3);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb__024D_IN, __Vtemp_6);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp__024D_IN, __Vtemp_9);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay__024D_IN, __Vtemp_12);
        VL_ASSIGN_W(12288,vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first__024D_IN, __Vtemp_15);
    }
}

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__123(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__123\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult))) {
            VL_WRITEF_NX("        [SIGVEC8] outputs_collected: %0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__outputs_collected);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r__024EN))) {
            VL_WRITEF_NX("Cycle %0#: [VEC768] Returning final result\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer__024EN))) {
            VL_WRITEF_NX("Cycle %0#: [VEC768] Started processing 768 elements\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult))) {
            VL_WRITEF_NX("Cycle %0#: [VEC768] Collected chunk %0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult) 
                          & (0x5fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)))))) {
            VL_WRITEF_NX("Cycle %0#: [VEC768] All chunks collected, result ready\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1__024EN))) {
            VL_WRITEF_NX("Cycle %0#: [VEC768] Fed chunk %0# to sigmoid_module\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024EN_feed_input) 
                           & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 inputs fed, entering DRAINING state\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024EN_get_output) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__outputs_received)))))) {
            VL_WRITEF_NX("[NeuronUnit] All 48 outputs collected - DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed__024EN) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024can_accept_input) 
                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024can_accept_input) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024can_accept_input) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024can_accept_input) 
                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024can_accept_input) 
                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024can_accept_input) 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__024can_accept_input) 
                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__024can_accept_input) 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__024can_accept_input) 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__024can_accept_input) 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024can_accept_input) 
                                                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__024can_accept_input) 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024can_accept_input) 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024can_accept_input) 
                                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024can_accept_input) 
                                                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024can_accept_input))))))))))))))))) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__element_index)))))) {
            VL_WRITEF_NX("[LIFLayer] All 48 elements fed, waiting for neurons to finish\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state)) 
                          & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state)) 
                             & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state)) 
                                & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state)) 
                                   & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state)) 
                                      & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state)) 
                                         & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state)) 
                                            & ((3U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state)) 
                                               & ((3U 
                                                   == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state)) 
                                                  & ((3U 
                                                      == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state)) 
                                                     & ((3U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state)) 
                                                        & ((3U 
                                                            == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state)) 
                                                           & ((3U 
                                                               == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state)) 
                                                              & ((3U 
                                                                  == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state)) 
                                                                 & ((3U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state)) 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6171c202_0_3))))))))))))))))))) {
            VL_WRITEF_NX("[LIFLayer] All 16 neurons completed 48 elements - LAYER DONE\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] Starting computation on pipeline module\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__reg_a__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] All 4 SIMD lanes dispatched in PARALLEL\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__MUX_state__024write_1___05FPSEL_1) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024RDY_get_result) 
                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024RDY_get_result) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024RDY_get_result) 
                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024RDY_get_result)))))))) {
            VL_WRITEF_NX("[Cycle %0#] All SIMD modules completed. Total computation cycles: %0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count,
                         32,(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count 
                             - vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__start_cycle));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state))))) {
            VL_WRITEF_NX("[Cycle %0#] Pipeline auto-reset to Idle (ready for next computation)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__current_chunk__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] Testbench: COP ready for writes, starting chunk 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__WILL_FIRE_RL_write_chunk0))) {
            VL_WRITEF_NX("[Cycle %0#] Testbench: Writing chunk 0 to BRAM %0#, value=%x\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__current_bram),
                         16,(((IData)(vlSelfRef.mkTb_COP__DOT__CASE_current_bram_0_127_1_128_2_128_3_129_4_12_ETC___05Fq3) 
                              << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__CASE_current_bram_0_0_1_0_2_64_3_0_4_32_5_0_6___05FETC___05Fq4)));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__WILL_FIRE_RL_write_chunk0) 
                          & (0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__current_bram)))))) {
            VL_WRITEF_NX("[Cycle %0#] Testbench: Chunk 0 writes complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__WILL_FIRE_RL_write_chunk1))) {
            VL_WRITEF_NX("[Cycle %0#] Testbench: Writing chunk 1 to BRAM %0#, value=%x\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__current_bram),
                         16,((0U == (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))
                              ? 0x4160U : (((IData)(vlSelfRef.mkTb_COP__DOT__CASE_current_bram_1_131_2_131_3_131_4_132_5_13_ETC___05Fq1) 
                                            << 7U) 
                                           | (IData)(vlSelfRef.mkTb_COP__DOT__CASE_current_bram_1_0_2_16_3_32_4_16_5_32_6_48_ETC___05Fq2))));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__WILL_FIRE_RL_write_chunk1) 
                          & (0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__current_bram)))))) {
            VL_WRITEF_NX("[Cycle %0#] Testbench: Chunk 1 writes complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__WILL_FIRE_RL_write_chunk2))) {
            VL_WRITEF_NX("[Cycle %0#] Testbench: Writing chunk 2 to BRAM %0#, value=%x\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__current_bram),
                         16,(((IData)(vlSelfRef.mkTb_COP__DOT__CASE_current_bram_0_132_1_132_2_132_3_132_4_13_ETC___05Fq5) 
                              << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__CASE_current_bram_0_24_1_40_2_56_3_72_4_8_5_24_ETC___05Fq6)));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__WILL_FIRE_RL_write_chunk2) 
                          & (0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__current_bram)))))) {
            VL_WRITEF_NX("[Cycle %0#] Testbench: ALL BRAM writes complete!\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__started))))) {
            VL_WRITEF_NX("[Cycle %0#] Total cycles taken: %0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle,
                         32,vlSelfRef.mkTb_COP__DOT__cycle);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__started))))) {
            VL_WRITEF_NX("\n[Cycle %0#] Testbench: Finishing simulation\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__started))))) {
            VL_FINISH_MT("mkTb_COP.v", 444, "");
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__started__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] Testbench: Started COP computation\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((0x30d40U < vlSelfRef.mkTb_COP__DOT__cycle)))) {
            VL_WRITEF_NX("[Cycle %0#] ERROR: Timeout! Computation didn't complete.\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cycle);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((0x30d40U < vlSelfRef.mkTb_COP__DOT__cycle)))) {
            VL_FINISH_MT("mkTb_COP.v", 452, "");
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((((((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__result_valid) 
                                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__result_valid)) 
                                         & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__result_valid)) 
                                        & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__result_valid)) 
                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__result_valid)) 
                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__result_valid)) 
                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__result_valid)) 
                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__result_valid)) 
                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__result_valid)) 
                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__result_valid)) 
                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__result_valid)) 
                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__result_valid)) 
                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__result_valid)) 
                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__result_valid)) 
                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__result_valid)) 
                            & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__result_valid)) 
                           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__full_reg)) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__full_reg))))) {
            VL_WRITEF_NX("[Cycle %0#] STAGE3-EXP: Collected e1/e2 results\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] STAGE2-SUB: Chunk %0#, Batch %0# (base=%0#)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__chunks_processed),
                         3,vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx,
                         5,(0x18U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx) 
                                     << 3U)));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024EN_feed_input))) {
            VL_WRITEF_NX("[Cycle %0#] STAGE1-MAX: Chunk %0# fed\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__chunks_processed));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__started__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] COP: Starting computation\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr__024EN) 
                                      & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                                     & (1U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                                    & (2U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                                   & (3U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                                  & (4U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                                 & (5U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                                & (6U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                               & (7U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                              & (8U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                             & (9U != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                            & (0xaU != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                           & (0xbU != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram))) 
                          & (0xcU != (IData)(vlSelfRef.mkTb_COP__DOT__current_bram)))))) {
            VL_WRITEF_NX("[Cycle %0#] ERROR: Invalid BRAM ID %0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__current_bram));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: Started write to BRAM %0#, base_addr=%0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__current_bram),
                         10,vlSelfRef.mkTb_COP__DOT__cop__024write_bram_base_addr);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter__024EN) 
                          & (9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__init_counter)))))) {
            VL_WRITEF_NX("[Cycle %0#] COP: BRAMs initialized and ready\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading K chunk 0, issued read addr 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K chunk 0 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_k0))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K chunk 0 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading K chunk 1, issued read addr 256\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k1_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K chunk 1 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_k1))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K chunk 1 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k1_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading K chunk 2, issued read addr 512\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k2_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K chunk 2 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_k2))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K chunk 2 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_v0))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading V chunk 0, issued read addr 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V chunk 0 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_v0))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V chunk 0 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading V chunk 1, issued read addr 256\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v1_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V chunk 1 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_v1))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V chunk 1 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v1_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading V chunk 2, issued read addr 512\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v2_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V chunk 2 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_v2))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V chunk 2 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: V operation complete, moving to R\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_r0))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading R chunk 0, issued read addr 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R chunk 0 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_r0))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R chunk 0 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading R chunk 1, issued read addr 256\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r1_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R chunk 1 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_r1))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R chunk 1 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r1_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Loading R chunk 2, issued read addr 512\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r2_load_done))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R chunk 2 loaded, starting SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_r2))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R chunk 2 sent to SIMD pipeline\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: R operation complete \n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: ALL SIMD COMPUTATION DONE\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_prefetch_weights_overlap))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: [OVERLAP] Prefetching weight batch %0# for NEXT chunk DURING computation\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_prefetch_weights_wait))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: Prefetching weight batch %0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_load_weights_from_bram))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: Loaded 16x16 weights batch %0# to SA\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_prefetch_weights_overlap))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: [OVERLAP] Prefetching weight batch %0# for NEXT chunk DURING computation\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__024RDY_start) 
                          & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state)) 
                             & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weights_ready)) 
                                & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_weight_batch_requested)))))))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: Prefetching weight batch %0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__readCounter__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: Weight batch %0# ready\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_load_weights_from_bram))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: Loaded 16x16 weights batch %0# to SA\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__readCounter__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: Weight batch %0# ready\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_batch_counter));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_collect_result))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: Row_group=%0#, Input_chunk=%0# done, accumulated\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx),
                         6,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_collect_result) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx)))))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: Row_group=%0# COMPLETE (all 48 chunks accumulated)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_load_activations))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: Row_group=%0#, Input_chunk=%0#/12, Elements[%0#:%0#]\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         6,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx),
                         4,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx,
                         8,((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                            << 4U),8,(0xfU | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx) 
                                              << 4U)));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_state))))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: Stored row_group=%0# outputs [%0#:%0#]\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx),
                         8,((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx) 
                            << 4U),8,(0xfU | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx) 
                                              << 4U)));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_state)) 
                          & (0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: ALL 192 OUTPUTS COMPLETE!\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_collect_result))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: Row_group=%0#, Input_chunk=%0# done, accumulated\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         6,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx),
                         4,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_collect_result) 
                          & (0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx)))))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: Row_group=%0# COMPLETE (all 12 chunks accumulated)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         6,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_load_activations))) {
            VL_WRITEF_NX("[Cycle %0#] SA1: Row_group=%0#, Input_chunk=%0#/48, Elements[%0#:%0#]\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx),
                         6,vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx,
                         10,((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                             << 4U),10,(0xfU | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx) 
                                                << 4U)));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: Stored row_group=%0# outputs [%0#:%0#]\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         6,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx),
                         10,((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx) 
                             << 4U),10,(0xfU | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx) 
                                                << 4U)));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output__024EN) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx)))))) {
            VL_WRITEF_NX("[Cycle %0#] SA2: ALL 768 OUTPUTS COMPLETE!\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data))) {
            VL_WRITEF_NX("[Cycle %0#] TSC: Loading pp, aa, bb, time_first, time_decay from BRAM\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: WW Computing chunk 0 (ww = kk + time_first)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_ww0))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: WW Chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: WW Computing chunk 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_ww1))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: WW Chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: WW Computing chunk 2\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_started__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS: Starting MSE (pp, ww -> e1, e2)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: Computing B chunk 0 (b = e1*bb + e2)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_b0))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: B chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: Computing B chunk 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_b1))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: B chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: Computing B chunk 2\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing WW chunk 0 (ww = pp + time_decay)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_ww0))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: WW chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing WW chunk 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_ww1))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS: WW chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing WW chunk 2\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_started__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS: Starting MSE with p storage (ww, kk -> e1, e2, p)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] MSE : p Chunk %0# collected\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         7,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p__024EN) 
                          & (0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))))) {
            VL_WRITEF_NX("[Cycle %0#] MSE: ALL P COLLECTED (24 chunks)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_mse_done))) {
            VL_WRITEF_NX("[Cycle %0#] TSC_NTS : Transitioning to S3 computation\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing S3 chunk 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_s30))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: S3 chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing S3 chunk 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_s31))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: S3 chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing S3 chunk 2\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: Computing A chunk 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_a0))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: A chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: Computing A chunk 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_wait_a1))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: A chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: Computing A chunk 2\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] MSE : E1/E2 Chunk %0# collected\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         7,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024EN) 
                          & (0x5fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected)))))) {
            VL_WRITEF_NX("[Cycle %0#] MSE : ALL E1/E2 COLLECTED (96 chunks)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1__024EN) 
                          & (0x5fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected)))))) {
            VL_WRITEF_NX("[Cycle %0#] TSC_CTS : MSE DONE\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_a__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-WKV: Fed A and B vectors to division\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing S2 chunk 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_s20))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: S2 chunk 0 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing S2 chunk 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_wait_s21))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: S2 chunk 1 complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: Computing S2 chunk 2\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] MSE : E1/E2 Chunk %0# collected\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         7,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1__024EN) 
                          & (0x5fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected)))))) {
            VL_WRITEF_NX("[Cycle %0#] MSE : ALL E1/E2 COLLECTED (96 chunks)\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1__024EN) 
                          & (0x5fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected)))))) {
            VL_WRITEF_NX("[Cycle %0#] TSC_NTS : MSE DONE\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_feed_mse) 
                          & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown)))))) {
            VL_WRITEF_NX("[Cycle %0#] MSE: MSE input chunk %0# fed\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         6,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_feed_mse) 
                           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown))) 
                          & (0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed)))))) {
            VL_WRITEF_NX("[Cycle %0#] MSE: ALL 24 MSE INPUT CHUNKS FED\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_feed_mse) 
                          & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown)))))) {
            VL_WRITEF_NX("[Cycle %0#] MSE: MSE input chunk %0# fed\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         6,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_feed_mse) 
                           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_feed_cooldown))) 
                          & (0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed)))))) {
            VL_WRITEF_NX("[Cycle %0#] MSE: ALL 24 MSE INPUT CHUNKS FED\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__input_buffer__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] Sigmoid: Fed sa_result_r to sigmoid\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0))) {
            VL_WRITEF_NX("[Cycle %0#] RWKV SIMD: Computing chunk 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_rwkv0))) {
            VL_WRITEF_NX("[Cycle %0#] RWKV SIMD: Completed chunk 0\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1))) {
            VL_WRITEF_NX("[Cycle %0#] RWKV SIMD: Computing chunk 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_rwkv1))) {
            VL_WRITEF_NX("[Cycle %0#] RWKV SIMD: Completed chunk 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2))) {
            VL_WRITEF_NX("[Cycle %0#] RWKV SIMD: Computing chunk 2\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state))))) {
            VL_WRITEF_NX("[Cycle %0#] TSC DONE: CTS + NTS + STATE VEC\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] LIF : Fed chunk %0# to LIF\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed__024EN) 
                          & (0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed)))))) {
            VL_WRITEF_NX("[Cycle %0#] LIF : ALL 48 CHUNKS FED TO LIF%4#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_done)) 
                           & (0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state))) 
                          & (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__layer_state)))))) {
            VL_WRITEF_NX("[Cycle %0#] COP: All computation complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_ww__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS: WW All chunks complete. Starting MSE\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_b__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: B computation complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_b__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS: B DONE. Starting NTS\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_ww__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS: WW computation complete. Starting MSE\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_s3__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: S3 computation complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_s3__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS: S3 DONE. Waiting for V\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_a__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS SIMD: A computation complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_a__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-CTS: A DONE. Staring WKV\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_a__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-WKV: Starting division pipeline (a/b) for 768 elements\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_s2__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS SIMD: S2 computation complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_x) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: X chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmk) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: TMK chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmv) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: TMV chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmr) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: TMR chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_state) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: TMR chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_d) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: D chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_e) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: E chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_f) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: F chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_aa) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: AA chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_bb) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: BB chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_pp) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: PP chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tf) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: TF chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_td) 
                          & (0xffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: TD chunk with base_addr %0# write complete\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         10,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state)) 
                          & (9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter)))))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: Wait Complete, Ready For Next Write\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_readback_issue_read) 
                                      & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                                     & (1U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                                    & (2U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                                   & (3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                                  & (4U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                                 & (5U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                                & (6U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                               & (7U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                              & (8U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                             & (9U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                            & (0xaU != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                           & (0xbU != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id))) 
                          & (0xcU != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id)))))) {
            VL_WRITEF_NX("[Cycle %0#] ERROR: Invalid BRAM ID for readback\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_readback_issue_read))) {
            VL_WRITEF_NX("[Cycle %0#] READ-BACK: Issued read BRAM=%0#, chunk=%0#, offset=%0#, addr=%0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id),
                         2,vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id,
                         3,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_addr_offset),
                         10,vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("            COMPUTATION COMPLETE            \n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Total Cycles Taken: %0#\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("--------------------------------------------\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("            SAMPLE OUTPUT VALUES            \n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("--------------------------------------------\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  K[0]   = %x    K[767]   = %x\n",0,
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k[0U]),
                         16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k[0x17fU] 
                             >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  V[0]   = %x    V[767]   = %x\n",0,
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v[0U]),
                         16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v[0x17fU] 
                             >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  R[0]   = %x    R[767]   = %x\n",0,
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r[0U]),
                         16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r[0x17fU] 
                             >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  WKV[0] = %x    WKV[767] = %x\n",0,
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv[0U]),
                         16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv[0x17fU] 
                             >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  RWKV[0]= %x    RWKV[767]= %x\n",0,
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv[0U]),
                         16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv[0x17fU] 
                             >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  O[0]   = %x    O[767]   = %x\n",0,
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0U]),
                         16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                             >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("--------------------------------------------\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("            LIF SPIKE OUTPUT                \n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("--------------------------------------------\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 00: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 01: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 02: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 03: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 04: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 05: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 06: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 07: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 08: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 09: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 10: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 11: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 12: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 13: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 14: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("  Neuron 15: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_0) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_1) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_2) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_3) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_4) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_5) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_6) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_7) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_8) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_9) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_10) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_11) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_12) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_13) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_14) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_15) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_16) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_17) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_18) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_19) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_20) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_21) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_22) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_23) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_24) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_25) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_26) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_27) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_28) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_29) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_30) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_31) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_32) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_33) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_34) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_35) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_36) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_37) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_38) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_39) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX(" ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_40) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_41) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_42) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_43) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_44) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_45) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_46) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) {
            if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__spike_out_47) {
                VL_WRITEF_NX("1",0);
            } else {
                VL_WRITEF_NX("0",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("        BRAM WRITE VERIFICATION             \n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 0 (X      ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((0x3f80U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U])) 
                 & (IData)(((0x3f803f80U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0U]) 
                            & (0x3f803f80U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U]))))) {
                VL_WRITEF_NX("PASS16256\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 3f80)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x41604160U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U]) 
                          & (0x41604160U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U]))) 
                 & (0x4160U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16736\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4160)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[7U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42184218U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U]) 
                          & (0x42184218U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U])) 
                         & (0x4218U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[7U]))))) {
                VL_WRITEF_NX("PASS16920\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4218)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 1 (TMK    ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[7U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x40004000U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U]) 
                          & (0x40004000U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U]))) 
                 & (0x4000U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[7U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16384\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4000)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xcU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x41804180U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU]) 
                          & (0x41804180U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU])) 
                         & (0x4180U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xcU]))))) {
                VL_WRITEF_NX("PASS16768\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4180)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xcU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42284228U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU]) 
                          & (0x42284228U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU]))) 
                 & (0x4228U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xcU] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16936\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4228)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 2 (TMV    ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x11U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x40404040U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU]) 
                          & (0x40404040U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U])) 
                         & (0x4040U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x11U]))))) {
                VL_WRITEF_NX("PASS16448\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4040)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x11U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x41904190U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U]) 
                          & (0x41904190U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U]))) 
                 & (0x4190U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x11U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16784\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4190)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x16U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42384238U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U]) 
                          & (0x42384238U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U])) 
                         & (0x4238U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x16U]))))) {
                VL_WRITEF_NX("PASS16952\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4238)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 3 (TMR    ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x16U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x40804080U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U]) 
                          & (0x40804080U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U]))) 
                 & (0x4080U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x16U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16512\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4080)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1bU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x41a041a0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U]) 
                          & (0x41a041a0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU])) 
                         & (0x41a0U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1bU]))))) {
                VL_WRITEF_NX("PASS16800\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 41a0)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1bU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42484248U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU]) 
                          & (0x42484248U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU]))) 
                 & (0x4248U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1bU] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16968\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4248)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 4 (STATE  ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x20U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x40a040a0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU]) 
                          & (0x40a040a0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU])) 
                         & (0x40a0U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x20U]))))) {
                VL_WRITEF_NX("PASS16544\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 40a0)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x20U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42104210U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U]) 
                          & (0x42104210U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U]))) 
                 & (0x4210U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x20U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16912\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4210)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42884288U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U]) 
                          & (0x42884288U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U])) 
                         & (0x4288U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U]))))) {
                VL_WRITEF_NX("PASS17032\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4288)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 5 (D      ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x41004100U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U]) 
                          & (0x41004100U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U]))) 
                 & (0x4100U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16640\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4100)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2aU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42204220U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U]) 
                          & (0x42204220U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U])) 
                         & (0x4220U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2aU]))))) {
                VL_WRITEF_NX("PASS16928\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4220)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2aU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2bU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2bU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2cU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2cU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42984298U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2bU]) 
                          & (0x42984298U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2cU]))) 
                 & (0x4298U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2aU] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS17048\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4298)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 6 (E      ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2dU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2dU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2eU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2eU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2fU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x41104110U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2dU]) 
                          & (0x41104110U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2eU])) 
                         & (0x4110U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2fU]))))) {
                VL_WRITEF_NX("PASS16656\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4110)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2fU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x30U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x30U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x31U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x31U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42304230U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x30U]) 
                          & (0x42304230U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x31U]))) 
                 & (0x4230U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2fU] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16944\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4230)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x32U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x32U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x33U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x33U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x34U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42a042a0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x32U]) 
                          & (0x42a042a0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x33U])) 
                         & (0x42a0U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x34U]))))) {
                VL_WRITEF_NX("PASS17056\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 42a0)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 7 (F      ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x34U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x35U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x35U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x36U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x36U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x41204120U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x35U]) 
                          & (0x41204120U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x36U]))) 
                 & (0x4120U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x34U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16672\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4120)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x37U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x37U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x38U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x38U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x39U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42404240U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x37U]) 
                          & (0x42404240U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x38U])) 
                         & (0x4240U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x39U]))))) {
                VL_WRITEF_NX("PASS16960\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4240)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x39U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3aU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3aU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3bU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3bU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42a842a8U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3aU]) 
                          & (0x42a842a8U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3bU]))) 
                 & (0x42a8U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x39U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS17064\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 42a8)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 8 (AA     ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3cU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3cU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3dU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3dU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3eU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x41304130U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3cU]) 
                          & (0x41304130U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3dU])) 
                         & (0x4130U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3eU]))))) {
                VL_WRITEF_NX("PASS16688\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4130)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3eU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3fU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3fU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x40U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x40U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42504250U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3fU]) 
                          & (0x42504250U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x40U]))) 
                 & (0x4250U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3eU] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16976\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4250)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x41U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x41U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x42U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x42U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42b042b0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x41U]) 
                          & (0x42b042b0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x42U])) 
                         & (0x42b0U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U]))))) {
                VL_WRITEF_NX("PASS17072\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 42b0)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 9 (BB     ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x41404140U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U]) 
                          & (0x41404140U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U]))) 
                 & (0x4140U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16704\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4140)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42604260U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U]) 
                          & (0x42604260U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U])) 
                         & (0x4260U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U]))))) {
                VL_WRITEF_NX("PASS16992\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4260)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42b842b8U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U]) 
                          & (0x42b842b8U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU]))) 
                 & (0x42b8U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS17080\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 42b8)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 10 (PP     ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x41504150U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU]) 
                          & (0x41504150U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU])) 
                         & (0x4150U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU]))))) {
                VL_WRITEF_NX("PASS16720\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4150)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42704270U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU]) 
                          & (0x42704270U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU]))) 
                 & (0x4270U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS17008\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4270)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42c042c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U]) 
                          & (0x42c042c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U])) 
                         & (0x42c0U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U]))))) {
                VL_WRITEF_NX("PASS17088\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 42c0)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 11 (TF     ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x40a040a0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U]) 
                          & (0x40a040a0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U]))) 
                 & (0x40a0U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16544\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 40a0)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x57U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x41b041b0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U]) 
                          & (0x41b041b0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U])) 
                         & (0x41b0U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x57U]))))) {
                VL_WRITEF_NX("PASS16816\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 41b0)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x57U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x58U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x58U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x59U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x59U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42604260U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x58U]) 
                          & (0x42604260U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x59U]))) 
                 & (0x4260U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x57U] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16992\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4260)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("--- BRAM 12 (TD     ) ---\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 0 [Addr 0-4]:   ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5aU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5aU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5bU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5bU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x40c040c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5aU]) 
                          & (0x40c040c0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5bU])) 
                         & (0x40c0U == (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU]))))) {
                VL_WRITEF_NX("PASS16576\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 40c0)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 1 [Addr 256-260]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if (((IData)(((0x42004200U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU]) 
                          & (0x42004200U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU]))) 
                 & (0x4200U == (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU] 
                                >> 0x10U)))) {
                VL_WRITEF_NX("PASS16896\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4200)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("  Chunk 2 [Addr 512-516]: ",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U] 
                                     >> 0x10U));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("%x ",0,16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x61U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))) {
            if ((IData)((((0x42684268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU]) 
                          & (0x42684268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U])) 
                         & (0x4268U == vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x61U])))) {
                VL_WRITEF_NX("PASS17000\n",0);
            } else {
                VL_WRITEF_NX("FAIL (Expected: 4268)\n",0);
            }
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete_5907_AND_readback_values_598_ETC___05F_d48825))))) {
            VL_WRITEF_NX("     ALL BRAM WRITES VERIFIED       \n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete)) 
                          & (IData)((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0x3f803f80U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0U]) 
                                                                                | (0x3f803f80U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U])) 
                                                                                | (0x41603f80U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U])) 
                                                                                | (0x41604160U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])) 
                                                                                | (0x41604160U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])) 
                                                                                | (0x42184218U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])) 
                                                                                | (0x42184218U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U])) 
                                                                                | (0x40004218U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[7U])) 
                                                                                | (0x40004000U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U])) 
                                                                                | (0x40004000U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U])) 
                                                                                | (0x41804180U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])) 
                                                                                | (0x41804180U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU])) 
                                                                                | (0x42284180U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xcU])) 
                                                                                | (0x42284228U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU])) 
                                                                                | (0x42284228U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU])) 
                                                                                | (0x40404040U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])) 
                                                                                | (0x40404040U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U])) 
                                                                                | (0x41904040U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x11U])) 
                                                                                | (0x41904190U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U])) 
                                                                                | (0x41904190U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U])) 
                                                                                | (0x42384238U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])) 
                                                                                | (0x42384238U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U])) 
                                                                                | (0x40804238U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x16U])) 
                                                                                | (0x40804080U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U])) 
                                                                                | (0x40804080U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U])) 
                                                                                | (0x41a041a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])) 
                                                                                | (0x41a041a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU])) 
                                                                                | (0x424841a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1bU])) 
                                                                                | (0x42484248U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU])) 
                                                                                | (0x42484248U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU])) 
                                                                                | (0x40a040a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])) 
                                                                                | (0x40a040a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU])) 
                                                                                | (0x421040a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x20U])) 
                                                                                | (0x42104210U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U])) 
                                                                                | (0x42104210U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U])) 
                                                                                | (0x42884288U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])) 
                                                                                | (0x42884288U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U])) 
                                                                                | (0x41004288U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x25U])) 
                                                                                | (0x41004100U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U])) 
                                                                                | (0x41004100U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U])) 
                                                                                | (0x42204220U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])) 
                                                                                | (0x42204220U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U])) 
                                                                                | (0x42984220U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2aU])) 
                                                                                | (0x42984298U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2bU])) 
                                                                                | (0x42984298U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2cU])) 
                                                                                | (0x41104110U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2dU])) 
                                                                                | (0x41104110U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2eU])) 
                                                                                | (0x42304110U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x2fU])) 
                                                                                | (0x42304230U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x30U])) 
                                                                                | (0x42304230U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x31U])) 
                                                                                | (0x42a042a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x32U])) 
                                                                                | (0x42a042a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x33U])) 
                                                                                | (0x412042a0U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x34U])) 
                                                                                | (0x41204120U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x35U])) 
                                                                                | (0x41204120U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x36U])) 
                                                                               | (0x42404240U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x37U])) 
                                                                              | (0x42404240U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x38U])) 
                                                                             | (0x42a84240U 
                                                                                != 
                                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x39U])) 
                                                                            | (0x42a842a8U 
                                                                               != 
                                                                               vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3aU])) 
                                                                           | (0x42a842a8U 
                                                                              != 
                                                                              vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3bU])) 
                                                                          | (0x41304130U 
                                                                             != 
                                                                             vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3cU])) 
                                                                         | (0x41304130U 
                                                                            != 
                                                                            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3dU])) 
                                                                        | (0x42504130U 
                                                                           != 
                                                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3eU])) 
                                                                       | (0x42504250U 
                                                                          != 
                                                                          vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x3fU])) 
                                                                      | (0x42504250U 
                                                                         != 
                                                                         vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x40U])) 
                                                                     | (0x42b042b0U 
                                                                        != 
                                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x41U])) 
                                                                    | (0x42b042b0U 
                                                                       != 
                                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x42U])) 
                                                                   | (0x414042b0U 
                                                                      != 
                                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U])) 
                                                                  | (0x41404140U 
                                                                     != 
                                                                     vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U])) 
                                                                 | (0x41404140U 
                                                                    != 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U])) 
                                                                | (0x42604260U 
                                                                   != 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U])) 
                                                               | (0x42604260U 
                                                                  != 
                                                                  vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U])) 
                                                              | (0x42b84260U 
                                                                 != 
                                                                 vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x48U])) 
                                                             | (0x42b842b8U 
                                                                != 
                                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x49U])) 
                                                            | (0x42b842b8U 
                                                               != 
                                                               vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4aU])) 
                                                           | (0x41504150U 
                                                              != 
                                                              vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4bU])) 
                                                          | (0x41504150U 
                                                             != 
                                                             vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4cU])) 
                                                         | (0x42704150U 
                                                            != 
                                                            vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU])) 
                                                        | (0x42704270U 
                                                           != 
                                                           vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU])) 
                                                       | (0x42704270U 
                                                          != 
                                                          vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU])) 
                                                      | (0x42c042c0U 
                                                         != 
                                                         vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U])) 
                                                     | (0x42c042c0U 
                                                        != 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U])) 
                                                    | (0x40a042c0U 
                                                       != 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x52U])) 
                                                   | (0x40a040a0U 
                                                      != 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x53U])) 
                                                  | (0x40a040a0U 
                                                     != 
                                                     vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x54U])) 
                                                 | (0x41b041b0U 
                                                    != 
                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x55U])) 
                                                | (0x41b041b0U 
                                                   != 
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x56U])) 
                                               | (0x426041b0U 
                                                  != 
                                                  vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x57U])) 
                                              | (0x42604260U 
                                                 != 
                                                 vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x58U])) 
                                             | (0x42604260U 
                                                != 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x59U])) 
                                            | (0x40c040c0U 
                                               != vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5aU])) 
                                           | (0x40c040c0U 
                                              != vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5bU])) 
                                          | (0x420040c0U 
                                             != vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU])) 
                                         | (0x42004200U 
                                            != vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU])) 
                                        | (0x42004200U 
                                           != vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU])) 
                                       | (0x42684268U 
                                          != vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU])) 
                                      | (0x42684268U 
                                         != vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U])) 
                                     | (0x4268U != 
                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x61U]))))))) {
            VL_WRITEF_NX("     SOME BRAM WRITES FAILED        \n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete)))))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete)))))) {
            VL_WRITEF_NX("  WARNING: Read-back verification not run  \n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete)))))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule) 
                          & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete)))))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("          MONICA PIPELINE COMPLETE          \n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("============================================\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_one_last_rule))) {
            VL_WRITEF_NX("\n",0);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] READ-BACK: Collected BRAM=%0#, chunk=%0#, offset=%0#, value=%x\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         4,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id),
                         2,vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id,
                         3,(IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_addr_offset),
                         16,vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values__024EN) 
                            & (4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_addr_offset))) 
                           & (2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id))) 
                          & (0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_bram_id)))))) {
            VL_WRITEF_NX("[Cycle %0#] READ-BACK: All verification reads complete! Collected %0# values\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         8,(0xffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete) 
                          & (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))))) {
            VL_WRITEF_NX("[Cycle %0#] COP: Starting SA 2 for O operation\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete) 
                          & (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))))) {
            VL_WRITEF_NX("[Cycle %0#] READ-BACK: Starting verification reads\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete) 
                          & (3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))))) {
            VL_WRITEF_NX("[Cycle %0#] COP: Starting SA 2\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: K operation complete, moving to V\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] SIMD: Starting SA 1\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_data_loaded__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC: ALL REQUIRED DATA LOADED FROM BRAM.\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_vv))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-NTS: V Ready. Transitioning to compute A SIMD\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] TSC-WKV: division results collected wkv[2] = %x : wkv[766] = %x\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[1U]),
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x17fU]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] Sigmoid: Sigmoid results collected r[2] = %x : r[766] = %x\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count,
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_0[1U]),
                         16,(0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__output_chunks_95[3U]));
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] COP: Sigmoid Done Starting SIMD for RWKV Computaton\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
                          & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))))) {
            VL_WRITEF_NX("[Cycle %0#] COP: K SA complete. Starting SA for V and TSC for current time step\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
                          & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))))) {
            VL_WRITEF_NX("[Cycle %0#] COP: V SA complete. Starting SA for R\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
                          & (2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))))) {
            VL_WRITEF_NX("[Cycle %0#] COP: R SA complete. ALL OPERATIONS DONE\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
                          & (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))))) {
            VL_WRITEF_NX("[Cycle %0#] COP: O SA complete. ALL OPERATIONS TRULY DONE\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY(((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
                             & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation))) 
                            & (1U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation))) 
                           & (2U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation))) 
                          & (3U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))))) {
            VL_WRITEF_NX("[Cycle %0#] ERROR: Unexpected SA operation state\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] RWKV SIMD: RWKV Computation Done. Starting SA for O\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
    if (vlSelfRef.RST_N) {
        if (VL_UNLIKELY((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_rwkv__024EN))) {
            VL_WRITEF_NX("[Cycle %0#] BRAM WRITE: Ready to accept writes from TB\n",0,
                         32,vlSelfRef.mkTb_COP__DOT__cop__DOT__cycle_count);
        }
    }
}
