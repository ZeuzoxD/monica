// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h6e0f3f36_0;
extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h410dc175_0;
extern const VlWide<128>/*4095:0*/ VmkTb_COP__ConstPool__CONST_h4d280442_0;

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__134(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__134\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    VlWide<128>/*4095:0*/ __Vtemp_4;
    VlWide<128>/*4095:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    VlWide<128>/*4095:0*/ __Vtemp_11;
    VlWide<128>/*4095:0*/ __Vtemp_13;
    VlWide<128>/*4095:0*/ __Vtemp_15;
    VlWide<128>/*4095:0*/ __Vtemp_17;
    VlWide<128>/*4095:0*/ __Vtemp_19;
    VlWide<128>/*4095:0*/ __Vtemp_21;
    VlWide<128>/*4095:0*/ __Vtemp_23;
    VlWide<128>/*4095:0*/ __Vtemp_24;
    VlWide<128>/*4095:0*/ __Vtemp_25;
    VlWide<128>/*4095:0*/ __Vtemp_26;
    VlWide<128>/*4095:0*/ __Vtemp_27;
    VlWide<128>/*4095:0*/ __Vtemp_28;
    VlWide<128>/*4095:0*/ __Vtemp_29;
    VlWide<128>/*4095:0*/ __Vtemp_30;
    VlWide<128>/*4095:0*/ __Vtemp_31;
    VlWide<128>/*4095:0*/ __Vtemp_33;
    VlWide<128>/*4095:0*/ __Vtemp_35;
    VlWide<128>/*4095:0*/ __Vtemp_37;
    VlWide<128>/*4095:0*/ __Vtemp_39;
    VlWide<128>/*4095:0*/ __Vtemp_41;
    VlWide<128>/*4095:0*/ __Vtemp_43;
    VlWide<128>/*4095:0*/ __Vtemp_44;
    VlWide<128>/*4095:0*/ __Vtemp_46;
    VlWide<128>/*4095:0*/ __Vtemp_47;
    VlWide<128>/*4095:0*/ __Vtemp_48;
    VlWide<128>/*4095:0*/ __Vtemp_50;
    VlWide<128>/*4095:0*/ __Vtemp_51;
    VlWide<128>/*4095:0*/ __Vtemp_52;
    VlWide<128>/*4095:0*/ __Vtemp_53;
    VlWide<128>/*4095:0*/ __Vtemp_54;
    VlWide<128>/*4095:0*/ __Vtemp_55;
    VlWide<128>/*4095:0*/ __Vtemp_56;
    VlWide<128>/*4095:0*/ __Vtemp_57;
    VlWide<128>/*4095:0*/ __Vtemp_58;
    VlWide<128>/*4095:0*/ __Vtemp_59;
    VlWide<128>/*4095:0*/ __Vtemp_60;
    VlWide<128>/*4095:0*/ __Vtemp_61;
    VlWide<128>/*4095:0*/ __Vtemp_63;
    VlWide<128>/*4095:0*/ __Vtemp_65;
    VlWide<128>/*4095:0*/ __Vtemp_67;
    VlWide<128>/*4095:0*/ __Vtemp_68;
    VlWide<128>/*4095:0*/ __Vtemp_70;
    VlWide<128>/*4095:0*/ __Vtemp_72;
    VlWide<128>/*4095:0*/ __Vtemp_73;
    VlWide<128>/*4095:0*/ __Vtemp_74;
    VlWide<128>/*4095:0*/ __Vtemp_76;
    VlWide<128>/*4095:0*/ __Vtemp_77;
    VlWide<128>/*4095:0*/ __Vtemp_78;
    VlWide<128>/*4095:0*/ __Vtemp_79;
    VlWide<128>/*4095:0*/ __Vtemp_80;
    VlWide<128>/*4095:0*/ __Vtemp_81;
    VlWide<128>/*4095:0*/ __Vtemp_82;
    VlWide<128>/*4095:0*/ __Vtemp_83;
    VlWide<128>/*4095:0*/ __Vtemp_85;
    VlWide<128>/*4095:0*/ __Vtemp_86;
    VlWide<128>/*4095:0*/ __Vtemp_87;
    VlWide<128>/*4095:0*/ __Vtemp_88;
    VlWide<128>/*4095:0*/ __Vtemp_89;
    VlWide<128>/*4095:0*/ __Vtemp_90;
    VlWide<128>/*4095:0*/ __Vtemp_91;
    VlWide<128>/*4095:0*/ __Vtemp_92;
    VlWide<128>/*4095:0*/ __Vtemp_93;
    VlWide<128>/*4095:0*/ __Vtemp_94;
    VlWide<128>/*4095:0*/ __Vtemp_95;
    VlWide<128>/*4095:0*/ __Vtemp_96;
    VlWide<128>/*4095:0*/ __Vtemp_97;
    VlWide<128>/*4095:0*/ __Vtemp_98;
    VlWide<128>/*4095:0*/ __Vtemp_99;
    VlWide<128>/*4095:0*/ __Vtemp_100;
    VlWide<128>/*4095:0*/ __Vtemp_101;
    VlWide<128>/*4095:0*/ __Vtemp_103;
    VlWide<128>/*4095:0*/ __Vtemp_105;
    VlWide<128>/*4095:0*/ __Vtemp_107;
    VlWide<128>/*4095:0*/ __Vtemp_109;
    VlWide<128>/*4095:0*/ __Vtemp_111;
    // Body
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & 0xaaU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17aU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x172U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                   >> 0x17U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x162U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                               >> 0x17U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x152U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                               >> 0x17U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x142U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                           >> 0x17U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x132U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                               >> 0x17U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x122U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                           >> 0x17U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x112U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                           >> 0x17U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x102U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                       >> 0x17U)));
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x173U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x163U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x153U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x143U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x133U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x123U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x113U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10bU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x103U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x174U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x164U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x154U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x144U] 
                                                      >> 0x1fU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x134U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x124U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x114U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10cU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x104U] 
                                                      >> 0x1fU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfaU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfbU] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfcU] 
                                                   >> 0x17U)));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf2U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf3U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf4U] 
                                                   >> 0x17U)));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xebU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xecU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe4U] 
                                               >> 0x17U)));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdcU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd4U] 
                                               >> 0x17U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcbU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xccU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc4U] 
                                           >> 0x17U)));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbaU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbbU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbcU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb2U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb3U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb4U] 
                                               >> 0x17U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaaU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xabU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xacU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa2U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa3U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa4U] 
                                           >> 0x17U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9cU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x92U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x93U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x94U] 
                                           >> 0x17U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8cU] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x82U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x83U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x84U] 
                                       >> 0x17U)));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7cU] 
                                               >> 0x17U)));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x72U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x73U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x74U] 
                                               >> 0x17U)));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6cU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x62U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x63U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x64U] 
                                           >> 0x17U)));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5cU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x52U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x53U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x54U] 
                                           >> 0x17U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4cU] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x42U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x43U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x44U] 
                                       >> 0x17U)));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3cU] 
                                           >> 0x17U)));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x32U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x33U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x34U] 
                                           >> 0x17U)));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2cU] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x22U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x23U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x24U] 
                                       >> 0x17U)));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1cU] 
                                       >> 0x17U)));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14U] 
                                       >> 0x17U)));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcU] 
                                   >> 0x17U)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189918_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq548 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq544 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq546 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2189095_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq545 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq541 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq543 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2188272_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq542 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq538 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq540 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2187449_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq539 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq535 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_6_TO_0_1_sa_r_ETC___05Fq537 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2186626_0_sa_result_o_BITS_14_TO_7_1_sa___05FETC___05Fq536 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[4U] 
                                   >> 0x17U)));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    vlSelfRef.__VdfgRegularize_h6171c202_0_19 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
            = ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                ? 0xaU : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                           ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_47)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_46))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_45)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_44)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_43)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_42))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_41)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_40))))
                           : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_39)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_38))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_37)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_36)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_35)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_34))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_33)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_32))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_32) 
                                                      >> 0xfU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_31;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_31) 
                                     >> 0xfU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_30;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_30) 
                                     >> 0xfU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_29;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_29) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_28;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_28) 
                                 >> 0xfU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_27;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_27) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_26;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_26) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_25;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_25) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_24;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_24) 
                             >> 0xfU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_23;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_23) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_22;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_22) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_21;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_21) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_20;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_20) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_19;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_19) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_18;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_18) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_17;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_17) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_16;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_16) 
                         >> 0xfU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_15;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_15) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_14;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_14) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_13;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_13) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_12;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_12) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_11;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_11) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_10;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_10) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_9;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_9) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_8;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_8) 
                         >> 0xfU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_7;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_7) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_6;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_6) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_5;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_5) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_4;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_4) 
                         >> 0xfU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_3;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_3) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_2;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_2) 
                         >> 0xfU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_1;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_1) 
                     >> 0xfU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__refr_0;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__v_t_0) 
                     >> 0xfU));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    vlSelfRef.__VdfgRegularize_h6171c202_0_20 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
            = ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                ? 0xaU : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                           ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_47)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_46))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_45)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_44)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_43)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_42))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_41)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_40))))
                           : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_39)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_38))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_37)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_36)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_35)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_34))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_33)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_32))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_32) 
                                                      >> 0xfU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_31;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_31) 
                                     >> 0xfU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_30;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_30) 
                                     >> 0xfU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_29;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_29) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_28;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_28) 
                                 >> 0xfU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_27;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_27) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_26;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_26) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_25;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_25) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_24;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_24) 
                             >> 0xfU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_23;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_23) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_22;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_22) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_21;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_21) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_20;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_20) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_19;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_19) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_18;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_18) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_17;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_17) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_16;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_16) 
                         >> 0xfU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_15;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_15) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_14;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_14) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_13;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_13) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_12;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_12) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_11;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_11) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_10;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_10) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_9;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_9) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_8;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_8) 
                         >> 0xfU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_7;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_7) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_6;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_6) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_5;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_5) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_4;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_4) 
                         >> 0xfU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_3;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_3) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_2;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_2) 
                         >> 0xfU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_1;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_1) 
                     >> 0xfU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__refr_0;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__v_t_0) 
                     >> 0xfU));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    vlSelfRef.__VdfgRegularize_h6171c202_0_21 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
            = ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                ? 0xaU : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                           ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_47)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_46))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_45)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_44)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_43)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_42))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_41)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_40))))
                           : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_39)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_38))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_37)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_36)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_35)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_34))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_33)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_32))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_32) 
                                                      >> 0xfU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_31;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_31) 
                                     >> 0xfU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_30;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_30) 
                                     >> 0xfU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_29;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_29) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_28;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_28) 
                                 >> 0xfU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_27;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_27) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_26;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_26) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_25;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_25) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_24;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_24) 
                             >> 0xfU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_23;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_23) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_22;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_22) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_21;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_21) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_20;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_20) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_19;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_19) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_18;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_18) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_17;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_17) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_16;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_16) 
                         >> 0xfU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_15;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_15) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_14;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_14) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_13;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_13) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_12;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_12) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_11;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_11) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_10;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_10) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_9;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_9) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_8;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_8) 
                         >> 0xfU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_7;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_7) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_6;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_6) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_5;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_5) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_4;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_4) 
                         >> 0xfU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_3;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_3) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_2;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_2) 
                         >> 0xfU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_1;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_1) 
                     >> 0xfU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__refr_0;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__v_t_0) 
                     >> 0xfU));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    vlSelfRef.__VdfgRegularize_h6171c202_0_22 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
            = ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                ? 0xaU : ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                           ? ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_47)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_46))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_45)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_44)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_43)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_42))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_41)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_40))))
                           : ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                               ? ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_39)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_38))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_37)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_36)))
                               : ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                   ? ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_35)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_34))
                                   : ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_33)
                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_32))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((1U & (~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index) 
                               >> 4U))) && (1U & ((8U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_47) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_46) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_45) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_44) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_43) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_42) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_41) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_40) 
                                                      >> 0xfU))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_39) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_38) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_37) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_36) 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_35) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_34) 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_33) 
                                                      >> 0xfU)
                                                      : 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_32) 
                                                      >> 0xfU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_31;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_31) 
                                     >> 0xfU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_30;
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_30) 
                                     >> 0xfU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_29;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_29) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_28;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_28) 
                                 >> 0xfU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_27;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_27) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_26;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_26) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_25;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_25) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_24;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_24) 
                             >> 0xfU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_23;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_23) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_22;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_22) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_21;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_21) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_20;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_20) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_19;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_19) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_18;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_18) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_17;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_17) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_16;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_16) 
                         >> 0xfU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_15;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_15) 
                                 >> 0xfU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                        = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_14;
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                        = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_14) 
                                 >> 0xfU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_13;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_13) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_12;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_12) 
                             >> 0xfU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_11;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_11) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_10;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_10) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_9;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_9) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_8;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_8) 
                         >> 0xfU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_7;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_7) 
                             >> 0xfU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                    = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_6;
                vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                    = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_6) 
                             >> 0xfU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_5;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_5) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_4;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_4) 
                         >> 0xfU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_3;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_3) 
                         >> 0xfU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_2;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
                = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_2) 
                         >> 0xfU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__input_index))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_1;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_1) 
                     >> 0xfU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024load_and_step_refr 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__refr_0;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BIT_15_7_v_t_1_8_BIT_15_9_v_t___05FETC___05F_d164 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__v_t_0) 
                     >> 0xfU));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.__VdfgRegularize_h6171c202_0_2 = ((3U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__state)) 
                                                & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_vv)) 
                                                   & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_data_loaded__024EN))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
           & (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_processing_complete__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_processing_complete__024D_IN) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_current_sa_operation__024write_1___05FSEL_1 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_67) 
              | (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_tsc_state__024write_1___05FSEL_2 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
           & ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)) 
              | ((2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)) 
                 | (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_sa1_accumulator__024write_1___05FSEL_2 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_67));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_r_ready__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_state__024write_1___05FPSEL_2) 
           & (2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__current_sa_operation)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_9 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_185 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_187 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_189 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_191 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_193 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_195 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_197 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_0 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_73 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_75 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_77 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_79 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_81 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_83 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_85 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_7 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_199 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_201 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_203 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_205 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_207 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_209 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_211 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_2 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_87 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_89 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_91 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_93 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_95 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_97 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_99 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_5 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_213 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_215 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_217 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_219 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_221 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_223 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_225 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_101 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_103 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_105 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_107 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_109 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_111 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_113 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_3 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_227 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_229 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_231 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_233 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_235 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_237 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_239 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_6 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_115 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_117 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_119 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_121 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_123 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_125 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_127 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_1 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_241 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_243 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_245 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_247 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_249 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_251 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_253 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_8 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_129 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_131 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_133 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_135 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_137 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_139 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_141 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_15 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_255 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_257 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_259 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_261 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_263 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_265 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_267 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_10 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_143 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_145 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_147 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_149 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_151 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_153 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_155 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_269 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_271 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_273 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_275 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_277 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_279 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_281 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh7890) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_11 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_157 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_159 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_161 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_163 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_165 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_167 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_169 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_13 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_283 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_285 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_287 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_289 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_291 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_293 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_295 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh8795) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_12 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_171 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_173 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_175 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_177 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_179 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_181 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_183 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                              << 6U))));
    VL_SEL_WWII(4096,12288, __Vtemp_1, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_2, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_3, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_4, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_5, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_6, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2, 0x2000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_7, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1), vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_3___05FVAL_1, VmkTb_COP__ConstPool__CONST_h6e0f3f36_0);
    VL_COND_WIWW(4096, __Vtemp_9, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)), __Vtemp_6, __Vtemp_7);
    VL_COND_WIWW(4096, __Vtemp_11, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21)), __Vtemp_5, __Vtemp_9);
    VL_COND_WIWW(4096, __Vtemp_13, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)), __Vtemp_4, __Vtemp_11);
    VL_COND_WIWW(4096, __Vtemp_15, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2)), __Vtemp_3, __Vtemp_13);
    VL_COND_WIWW(4096, __Vtemp_17, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1)), __Vtemp_2, __Vtemp_15);
    if (((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1)) 
            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2)) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0)) 
          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1)) 
         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2))) {
        VL_ASSIGN_W(4096,__Vtemp_21, VmkTb_COP__ConstPool__CONST_h410dc175_0);
        VL_ASSIGN_W(4096,__Vtemp_46, VmkTb_COP__ConstPool__CONST_h410dc175_0);
    } else {
        VL_ASSIGN_W(4096,__Vtemp_21, VmkTb_COP__ConstPool__CONST_h4d280442_0);
        VL_ASSIGN_W(4096,__Vtemp_46, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    }
    VL_COND_WIWW(4096, __Vtemp_19, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0)), __Vtemp_1, __Vtemp_17);
    VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__024start_computation_c, 
                 (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0)) 
                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1))) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2))) 
                      | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20))) 
                     | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22))) 
                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1)) 
                  | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0) 
                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1)) 
                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2))), __Vtemp_19, __Vtemp_21);
    VL_SEL_WWII(4096,12288, __Vtemp_23, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_24, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_25, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_26, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_27, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_28, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_29, vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_30, vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r, 0x1000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_31, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0), __Vtemp_29, __Vtemp_30);
    VL_COND_WIWW(4096, __Vtemp_33, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)), __Vtemp_28, __Vtemp_31);
    VL_COND_WIWW(4096, __Vtemp_35, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21)), __Vtemp_27, __Vtemp_33);
    VL_COND_WIWW(4096, __Vtemp_37, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)), __Vtemp_26, __Vtemp_35);
    VL_COND_WIWW(4096, __Vtemp_39, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2)), __Vtemp_25, __Vtemp_37);
    VL_COND_WIWW(4096, __Vtemp_41, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1)), __Vtemp_24, __Vtemp_39);
    VL_COND_WIWW(4096, __Vtemp_43, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0)), __Vtemp_23, __Vtemp_41);
    VL_SEL_WWII(4096,12288, __Vtemp_44, vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid_result_r, 0x2000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_47, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1), vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FVAL_1, __Vtemp_46);
    VL_COND_WIWW(4096, __Vtemp_48, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2), __Vtemp_44, __Vtemp_47);
    VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__024start_computation_a, 
                 (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0)) 
                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1))) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2))) 
                      | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20))) 
                     | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22))) 
                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0)) 
                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1)), __Vtemp_43, __Vtemp_48);
    VL_SEL_WWII(4096,12288, __Vtemp_50, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_51, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_52, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_v, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_53, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_54, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_55, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_56, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_57, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, 0x1000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_58, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0), __Vtemp_56, __Vtemp_57);
    VL_COND_WIWW(4096, __Vtemp_59, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2), __Vtemp_55, __Vtemp_58);
    VL_COND_WIWW(4096, __Vtemp_60, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1), __Vtemp_54, __Vtemp_59);
    VL_COND_WIWW(4096, __Vtemp_61, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww), __Vtemp_53, __Vtemp_60);
    VL_COND_WIWW(4096, __Vtemp_63, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)), __Vtemp_52, __Vtemp_61);
    VL_COND_WIWW(4096, __Vtemp_65, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21)), __Vtemp_51, __Vtemp_63);
    VL_SEL_WWII(4096,12288, __Vtemp_68, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay, 0x2000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_70, ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1)) 
                                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2)) 
                                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30)) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31)) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32)), VmkTb_COP__ConstPool__CONST_h410dc175_0, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    VL_COND_WIWW(4096, __Vtemp_72, (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1)) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2)), VmkTb_COP__ConstPool__CONST_h6e0f3f36_0, __Vtemp_70);
    VL_COND_WIWW(4096, __Vtemp_73, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1), vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_4___05FVAL_1, __Vtemp_72);
    VL_COND_WIWW(4096, __Vtemp_67, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)), __Vtemp_50, __Vtemp_65);
    VL_COND_WIWW(4096, __Vtemp_74, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2), __Vtemp_68, __Vtemp_73);
    VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__024start_computation_d, 
                 (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                         | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)) 
                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1) 
                           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22))) 
                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww)) 
                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1)) 
                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2)) 
                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0)) 
                  | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1)), __Vtemp_67, __Vtemp_74);
    VL_SEL_WWII(4096,12288, __Vtemp_76, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_77, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_78, vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_k, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_79, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_80, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_81, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_82, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_83, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, 0x1000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_85, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20)), __Vtemp_82, __Vtemp_83);
    VL_COND_WIWW(4096, __Vtemp_86, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2), __Vtemp_81, __Vtemp_85);
    VL_COND_WIWW(4096, __Vtemp_87, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1), __Vtemp_80, __Vtemp_86);
    VL_COND_WIWW(4096, __Vtemp_88, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0), __Vtemp_79, __Vtemp_87);
    VL_COND_WIWW(4096, __Vtemp_89, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2), __Vtemp_78, __Vtemp_88);
    VL_COND_WIWW(4096, __Vtemp_90, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1), __Vtemp_77, __Vtemp_89);
    VL_COND_WIWW(4096, __Vtemp_91, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww), __Vtemp_76, __Vtemp_90);
    VL_SEL_WWII(4096,12288, __Vtemp_92, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_93, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_94, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_95, vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb, 0x2000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_96, vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, 0U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_97, vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, 0x1000U, 0x1000U);
    VL_SEL_WWII(4096,12288, __Vtemp_98, vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv, 0x2000U, 0x1000U);
    VL_COND_WIWW(4096, __Vtemp_99, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2), __Vtemp_98, vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_2___05FVAL_1);
    VL_COND_WIWW(4096, __Vtemp_100, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1), __Vtemp_97, __Vtemp_99);
    VL_COND_WIWW(4096, __Vtemp_101, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0), __Vtemp_96, __Vtemp_100);
    VL_COND_WIWW(4096, __Vtemp_103, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32)), __Vtemp_95, __Vtemp_101);
    VL_COND_WIWW(4096, __Vtemp_105, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31)), __Vtemp_94, __Vtemp_103);
    VL_COND_WIWW(4096, __Vtemp_107, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30)), __Vtemp_93, __Vtemp_105);
    VL_COND_WIWW(4096, __Vtemp_109, ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)), __Vtemp_92, __Vtemp_107);
    VL_COND_WIWW(4096, __Vtemp_111, (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                                            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22)) 
                                           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
                                              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30))) 
                                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31))) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                                            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32))) 
                                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0)) 
                                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1)) 
                                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2)) 
                                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1)), __Vtemp_109, VmkTb_COP__ConstPool__CONST_h4d280442_0);
    VL_COND_WIWW(4096, vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__024start_computation_b, 
                 ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww) 
                        | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1)) 
                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2)) 
                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0)) 
                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1)) 
                    | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2)) 
                   | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                      | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20))) 
                  | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1) 
                     | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21))), __Vtemp_91, __Vtemp_111);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__chunk0_a__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_pipeline__024start_computation_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b0) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a0) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b1) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a1) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_b2) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_a2) 
                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s30) 
                                | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s20) 
                                   | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s31) 
                                      | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s21) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s32) 
                                            | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_s22) 
                                               | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv0) 
                                                  | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv1) 
                                                     | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_compute_rwkv2) 
                                                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww) 
                                                           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww1) 
                                                              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_compute_ww2) 
                                                                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww0) 
                                                                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww1) 
                                                                       | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_compute_ww2))))))))))))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FPSEL_2 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_td) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tf) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_pp) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_bb) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_aa) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_f) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_e) 
                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_d) 
                                | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_state) 
                                   | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmr) 
                                      | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmv) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmk) 
                                            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_x)))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_readback_issue_read 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_issued)) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_started) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_complete)) 
                 & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_td)) 
                    & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tf)) 
                       & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_pp)) 
                          & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_bb)) 
                             & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_aa)) 
                                & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_f)) 
                                   & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_e)) 
                                      & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_d)) 
                                         & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_state)) 
                                            & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmr)) 
                                               & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmv)) 
                                                  & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmk)) 
                                                     & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_x)) 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2408) 
                                                           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r2_load)) 
                                                              & ((0x21U 
                                                                  != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2420))))))))))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x176U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x176U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x176U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37212[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37207[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x176U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x176U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x176U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39208[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39203[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x176U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x176U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x176U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28286[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28281[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x176U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x176U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x176U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30291[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30286[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_511_TO_496_ULE_findMax_vec___05FETC___05F_d8 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_495_TO_480_0_ULE_findMax_ve_ETC___05F_d22 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_479_TO_464_5_ULE_findMax_ve_ETC___05F_d37 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_463_TO_448_9_ULE_findMax_ve_ETC___05F_d51 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_447_TO_432_4_ULE_findMax_ve_ETC___05F_d66 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_431_TO_416_8_ULE_findMax_ve_ETC___05F_d80 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_415_TO_400_3_ULE_findMax_ve_ETC___05F_d95 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_399_TO_384_07_ULE_findMax_v_ETC___05F_d109 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_383_TO_368_22_ULE_findMax_v_ETC___05F_d124 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_367_TO_352_36_ULE_findMax_v_ETC___05F_d138 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_351_TO_336_51_ULE_findMax_v_ETC___05F_d153 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_335_TO_320_65_ULE_findMax_v_ETC___05F_d167 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_319_TO_304_80_ULE_findMax_v_ETC___05F_d182 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_303_TO_288_94_ULE_findMax_v_ETC___05F_d196 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_287_TO_272_09_ULE_findMax_v_ETC___05F_d211 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_271_TO_256_23_ULE_findMax_v_ETC___05F_d225 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_255_TO_240_38_ULE_findMax_v_ETC___05F_d240 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_239_TO_224_52_ULE_findMax_v_ETC___05F_d254 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_223_TO_208_67_ULE_findMax_v_ETC___05F_d269 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_207_TO_192_81_ULE_findMax_v_ETC___05F_d283 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_191_TO_176_96_ULE_findMax_v_ETC___05F_d298 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_175_TO_160_10_ULE_findMax_v_ETC___05F_d312 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_159_TO_144_25_ULE_findMax_v_ETC___05F_d327 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_143_TO_128_39_ULE_findMax_v_ETC___05F_d341 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_127_TO_112_54_ULE_findMax_v_ETC___05F_d356 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_111_TO_96_68_ULE_findMax_ve_ETC___05F_d370 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_95_TO_80_83_ULE_findMax_vec_ETC___05F_d385 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_79_TO_64_97_ULE_findMax_vec_ETC___05F_d399 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_63_TO_48_12_ULE_findMax_vec_ETC___05F_d414 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_47_TO_32_26_ULE_findMax_vec_ETC___05F_d428 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_31_TO_16_41_ULE_findMax_vec_ETC___05F_d443 
        = ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U] 
            >> 0x10U) <= (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U] 
                          >> 0x10U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__DOT__findMax_vec_a_BITS_15_TO_0_55_ULE_findMax_vec___05FETC___05F_d457 
        = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U]) 
           <= (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U]));
    vlSelfRef.__VdfgRegularize_h6171c202_0_4 = (1U 
                                                & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024EN_get_e1)) 
                                                   & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__outputs_collected__024EN))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT____VdfgRegularize_h2a9fd6f2_0_12 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT____VdfgRegularize_h2a9fd6f2_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT____VdfgRegularize_h2a9fd6f2_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT____VdfgRegularize_h2a9fd6f2_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT____VdfgRegularize_h2a9fd6f2_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT____VdfgRegularize_h2a9fd6f2_0_26 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT____VdfgRegularize_h2a9fd6f2_0_28 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT____VdfgRegularize_h2a9fd6f2_0_30 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__tmp___05Fh7252) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT____VdfgRegularize_h2a9fd6f2_0_12 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT____VdfgRegularize_h2a9fd6f2_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT____VdfgRegularize_h2a9fd6f2_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT____VdfgRegularize_h2a9fd6f2_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT____VdfgRegularize_h2a9fd6f2_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT____VdfgRegularize_h2a9fd6f2_0_26 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT____VdfgRegularize_h2a9fd6f2_0_28 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT____VdfgRegularize_h2a9fd6f2_0_30 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__tmp___05Fh7252) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT____VdfgRegularize_h2a9fd6f2_0_12 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT____VdfgRegularize_h2a9fd6f2_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT____VdfgRegularize_h2a9fd6f2_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT____VdfgRegularize_h2a9fd6f2_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT____VdfgRegularize_h2a9fd6f2_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT____VdfgRegularize_h2a9fd6f2_0_26 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT____VdfgRegularize_h2a9fd6f2_0_28 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT____VdfgRegularize_h2a9fd6f2_0_30 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__tmp___05Fh7252) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_12 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_26 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_28 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT____VdfgRegularize_h2a9fd6f2_0_30 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__tmp___05Fh7252) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__result_vector__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__MUX_state__024write_1___05FPSEL_1) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__024RDY_get_result) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__024RDY_get_result) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__024RDY_get_result) 
                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__024RDY_get_result)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_1_ETC___05F_d264 
        = (0xffffU & VL_SHIFTR_III(16,16,32, (0xffffU 
                                              & ((0x8000U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  ? 
                                                 (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))
                                                  : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCAT_s1_zc1_15_B_ETC___05F_d260))), 4U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0U] 
        = ((((0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[1U] 
        = ((((0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[2U] 
        = ((((0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[3U] 
        = ((((0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16fU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16fU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x16fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10956[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d10935[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36 
        = ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_exp))
            ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_sign)
                ? 0x7cU : 0x7eU) : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_exp))
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_sign)
                                         ? ((0x40U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_man))
                                             ? 0x7aU
                                             : 0x7bU)
                                         : 0x7eU) : 
                                    ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_sign)
                                          ? ((0x40U 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_man))
                                              ? ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_man))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_man))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_man))
                                                    ? 0U
                                                    : 0x76U)
                                                   : 0x77U)
                                                  : 0x78U)
                                              : 0x79U)
                                          : 0x7eU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__s1_sign)
                                       ? 0x7dU : 0x7eU))));
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1 
                = (1U | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq22) 
                           << 0x10U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq23) 
                                        << 8U)) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1996_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq24) 
                                                   << 1U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage1 
                = (1U | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1166_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq19) 
                           << 0x10U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1166_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq20) 
                                        << 8U)) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x1166_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq21) 
                                                   << 1U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage1 
                = (1U | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq16) 
                           << 0x10U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq17) 
                                        << 8U)) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x0336_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq18) 
                                                   << 1U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage1 
                = (1U | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq13) 
                           << 0x10U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq14) 
                                        << 8U)) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x9506_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq15) 
                                                   << 1U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage1 
                = (1U | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq10) 
                           << 0x10U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq11) 
                                        << 8U)) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x8676_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq12) 
                                                   << 1U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage1 
                = (1U | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq7) 
                           << 0x10U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq8) 
                                        << 8U)) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7846_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq9) 
                                                   << 1U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage1 
                = (1U | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BIT_15_1_input_buffe_ETC___05Fq4) 
                           << 0x10U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_14_TO_7_1_input_ETC___05Fq5) 
                                        << 8U)) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x7016_0_input_buffer_BITS_6_TO_0_1_input___05FETC___05Fq6) 
                                                   << 1U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage1 
                = (1U | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BIT_15_1_input_buffer_ETC___05Fq1) 
                           << 0x10U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_14_TO_7_1_input___05FETC___05Fq2) 
                                        << 8U)) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__CASE_x233_0_input_buffer_BITS_6_TO_0_1_input_b_ETC___05Fq3) 
                                                   << 1U)));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__activation_out_reg;
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                = (((QData)((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_a_BIT_15_1_vec_a_BIT_31___05FETC___05Fq1)) 
                    << 0x20U) | (QData)((IData)((1U 
                                                 | ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_a_BITS_14_TO_7_1_vec_a_B_ETC___05Fq2) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_a_BITS_6_TO_0_1_vec_a_BI_ETC___05Fq3) 
                                                         << 0x11U) 
                                                        | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BIT_15_1_vec_b_BIT_31___05FETC___05Fq4) 
                                                           << 0x10U))) 
                                                    | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_14_TO_7_1_vec_b_B_ETC___05Fq5) 
                                                        << 8U) 
                                                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__CASE_feed_index_0_vec_b_BITS_6_TO_0_1_vec_b_BI_ETC___05Fq6) 
                                                          << 1U)))))));
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__stage1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__stage1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__stage1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__stage1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__stage1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__stage1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__stage1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 = 0ULL;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__activation_out_reg = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36 
        = ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_exp))
            ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_sign)
                ? 0x7cU : 0x7eU) : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_exp))
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_sign)
                                         ? ((0x40U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_man))
                                             ? 0x7aU
                                             : 0x7bU)
                                         : 0x7eU) : 
                                    ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_sign)
                                          ? ((0x40U 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_man))
                                              ? ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_man))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_man))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_man))
                                                    ? 0U
                                                    : 0x76U)
                                                   : 0x77U)
                                                  : 0x78U)
                                              : 0x79U)
                                          : 0x7eU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__s1_sign)
                                       ? 0x7dU : 0x7eU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36 
        = ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_exp))
            ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_sign)
                ? 0x7cU : 0x7eU) : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_exp))
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_sign)
                                         ? ((0x40U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_man))
                                             ? 0x7aU
                                             : 0x7bU)
                                         : 0x7eU) : 
                                    ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_sign)
                                          ? ((0x40U 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_man))
                                              ? ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_man))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_man))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_man))
                                                    ? 0U
                                                    : 0x76U)
                                                   : 0x77U)
                                                  : 0x78U)
                                              : 0x79U)
                                          : 0x7eU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__s1_sign)
                                       ? 0x7dU : 0x7eU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36 
        = ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_exp))
            ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_sign)
                ? 0x7cU : 0x7eU) : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_exp))
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_sign)
                                         ? ((0x40U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_man))
                                             ? 0x7aU
                                             : 0x7bU)
                                         : 0x7eU) : 
                                    ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_sign)
                                          ? ((0x40U 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_man))
                                              ? ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_man))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_man))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_man))
                                                    ? 0U
                                                    : 0x76U)
                                                   : 0x77U)
                                                  : 0x78U)
                                              : 0x79U)
                                          : 0x7eU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__s1_sign)
                                       ? 0x7dU : 0x7eU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36 
        = ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_exp))
            ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_sign)
                ? 0x7cU : 0x7eU) : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_exp))
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_sign)
                                         ? ((0x40U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_man))
                                             ? 0x7aU
                                             : 0x7bU)
                                         : 0x7eU) : 
                                    ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_sign)
                                          ? ((0x40U 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_man))
                                              ? ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_man))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_man))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_man))
                                                    ? 0U
                                                    : 0x76U)
                                                   : 0x77U)
                                                  : 0x78U)
                                              : 0x79U)
                                          : 0x7eU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__s1_sign)
                                       ? 0x7dU : 0x7eU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36 
        = ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_exp))
            ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_sign)
                ? 0x7cU : 0x7eU) : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_exp))
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_sign)
                                         ? ((0x40U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_man))
                                             ? 0x7aU
                                             : 0x7bU)
                                         : 0x7eU) : 
                                    ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_sign)
                                          ? ((0x40U 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_man))
                                              ? ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_man))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_man))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_man))
                                                    ? 0U
                                                    : 0x76U)
                                                   : 0x77U)
                                                  : 0x78U)
                                              : 0x79U)
                                          : 0x7eU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__s1_sign)
                                       ? 0x7dU : 0x7eU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36 
        = ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_exp))
            ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_sign)
                ? 0x7cU : 0x7eU) : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_exp))
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_sign)
                                         ? ((0x40U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_man))
                                             ? 0x7aU
                                             : 0x7bU)
                                         : 0x7eU) : 
                                    ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_sign)
                                          ? ((0x40U 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_man))
                                              ? ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_man))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_man))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_man))
                                                    ? 0U
                                                    : 0x76U)
                                                   : 0x77U)
                                                  : 0x78U)
                                              : 0x79U)
                                          : 0x7eU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__s1_sign)
                                       ? 0x7dU : 0x7eU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__IF_s1_exp_4_EQ_129_6_THEN_IF_s1_sign_7_THEN_IF_ETC___05F_d36 
        = ((0x7fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_exp))
            ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_sign)
                ? 0x7cU : 0x7eU) : ((0x80U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_exp))
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_sign)
                                         ? ((0x40U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_man))
                                             ? 0x7aU
                                             : 0x7bU)
                                         : 0x7eU) : 
                                    ((0x81U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_exp))
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_sign)
                                          ? ((0x40U 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_man))
                                              ? ((0x20U 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_man))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_man))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_man))
                                                    ? 0U
                                                    : 0x76U)
                                                   : 0x77U)
                                                  : 0x78U)
                                              : 0x79U)
                                          : 0x7eU) : 
                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__s1_sign)
                                       ? 0x7dU : 0x7eU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__tmp___05Fh13689 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s2_y_new))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__bigger_m___05Fh13682) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__smaller_m___05Fh13683))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__IF_s2_y_new_80_BITS_14_TO_7_81_ULE_128_88_THEN_ETC___05F_d496)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__smaller_m___05Fh13683) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__bigger_m___05Fh13682))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__bigger_m___05Fh13682) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__smaller_m___05Fh13683)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_12 
        = (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_r))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__b_exp_eff___05Fh12482 
        = ((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_r) 
                            >> 7U))) ? 1U : (0xffU 
                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_r) 
                                                >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__b_full_mant___05Fh12479 
        = (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_r) 
                             >> 7U))) << 7U) | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_r)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15579[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15579[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15579[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15579[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15579[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15579[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15574[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17501[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17501[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17501[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17501[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17501[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17501[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17496[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12901[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12901[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12901[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12901[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12901[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12901[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12894[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21345[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21345[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21345[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21345[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21345[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21345[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21340[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0U] 
        = ((((0x9bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x9aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[1U] 
        = ((((0x9dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x9cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[2U] 
        = ((((0x9fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x9eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x4fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[3U] 
        = ((((0xa1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xa0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x50U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[4U] 
        = ((((0xa3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xa2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x51U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46570[0x14U] 
        = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46535[0xfU]);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19423[0U] 
        = ((((0x2f6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17aU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17aU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19423[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19423[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19423[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19423[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19423[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19418[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                                          - (IData)(0x7fU)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                                        - (IData)(0x7fU)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                              - (IData)(0x7fU)) 
                                             - (IData)(1U)) 
                                            - (IData)(1U)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
}
