// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

extern const VlUnpacked<SData/*9:0*/, 4> VmkTb_COP__ConstPool__TABLE_h5e3a9629_0;

VL_ATTR_COLD void VmkTb_COP___024root___stl_sequent__TOP__6(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___stl_sequent__TOP__6\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & 0x2aU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & 0xaaU);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & 0x2aU);
        } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x179U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x179U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x179U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x179U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x179U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x178U]);
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x171U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x171U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x171U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x171U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x171U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x169U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x169U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x169U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x169U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x169U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x161U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x161U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x161U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x161U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x161U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U]);
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x159U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x159U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x159U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x159U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x159U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x151U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x151U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x151U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x151U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x151U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x149U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x149U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x149U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x149U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x149U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x141U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x141U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x141U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x141U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x141U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U] 
                                              >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x139U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x139U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x139U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x139U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x139U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x138U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x131U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x131U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x131U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x131U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x131U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x129U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x129U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x129U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x129U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x129U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x121U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x121U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x121U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x121U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x121U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x119U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x119U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x119U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x119U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x119U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x111U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x111U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x111U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x111U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x111U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x109U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x109U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x109U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x109U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x109U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x101U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x101U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x101U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x101U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x101U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x582562_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U]);
        }
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x179U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x171U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x169U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x161U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x159U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x151U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x149U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x141U] 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x139U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x131U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x129U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x121U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x119U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x111U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x109U] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x101U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
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
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x170U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x168U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x160U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x158U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x150U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x148U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x140U] 
                                                      >> 0x1fU))))
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
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x130U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x128U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x120U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x118U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x110U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x108U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x100U] 
                                                      >> 0x1fU))))))));
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
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_input_chunk_idx))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf9U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf9U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf9U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf9U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf9U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf9U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf8U] 
                                           >> 0x10U)));
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
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf1U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf1U] 
                                           >> 0x10U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf1U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf1U] 
                                         << 0x19U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf1U] 
                                           >> 7U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf1U]);
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U] 
                                         << 9U) | (
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U] 
                                                   >> 0x17U)));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U] 
                                         << 0x10U) 
                                        | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xf0U] 
                                           >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe9U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe9U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe9U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe9U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe9U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe9U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe8U] 
                                                  >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xe0U] 
                                                  >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd9U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd9U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd9U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd9U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd9U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd9U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd8U] 
                                                  >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xd0U] 
                                                  >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc8U] 
                                              >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc1U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc1U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc1U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc1U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc1U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc1U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xc0U] 
                                              >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb9U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb9U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb9U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb9U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb9U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb9U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb8U] 
                                                  >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb1U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb1U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb1U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb1U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb1U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb1U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xb0U] 
                                                  >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa9U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa9U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa9U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa9U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa9U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa9U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa8U] 
                                              >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa1U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa1U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa1U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa1U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa1U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa1U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0xa0U] 
                                              >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x99U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x99U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x99U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x99U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x99U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x99U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x98U] 
                                              >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x91U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x91U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x91U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x91U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x91U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x91U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x90U] 
                                              >> 0x10U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x89U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x89U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x89U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x89U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x89U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x89U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x88U] 
                                          >> 0x10U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x81U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x81U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x81U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x81U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x81U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x81U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x80U] 
                                          >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x79U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x79U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x79U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x79U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x79U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x79U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x78U] 
                                                  >> 0x10U)));
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
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x71U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x71U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x71U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x71U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x71U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x71U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x70U] 
                                                  >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x69U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x69U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x69U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x69U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x69U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x69U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x68U] 
                                              >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x61U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x61U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x61U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x61U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x61U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x61U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x60U] 
                                              >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x59U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x59U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x59U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x59U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x59U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x59U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x58U] 
                                              >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x51U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x51U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x51U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x51U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x51U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x51U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x50U] 
                                              >> 0x10U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x49U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x49U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x49U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x49U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x49U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x49U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x48U] 
                                          >> 0x10U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x41U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x41U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x41U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x41U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x41U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x41U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x40U] 
                                          >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x39U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x39U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x39U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x39U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x39U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x39U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x38U] 
                                              >> 0x10U)));
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
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x31U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x31U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x31U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x31U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x31U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x31U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x30U] 
                                              >> 0x10U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x29U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x29U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x29U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x29U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x29U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x29U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x28U] 
                                          >> 0x10U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x21U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x21U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x21U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x21U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x21U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x21U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x20U] 
                                          >> 0x10U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x19U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x19U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x19U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x19U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x19U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x19U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x18U] 
                                          >> 0x10U)));
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
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x11U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0x10U] 
                                          >> 0x10U)));
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[9U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[9U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[9U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[9U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[9U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[9U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[8U] 
                                      >> 0x10U)));
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
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580093_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x580916_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x581739_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_first_input[0U] 
                                      >> 0x10U)));
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
    if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7fU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7eU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7dU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7cU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7bU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x7aU]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x79U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x78U]);
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x77U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x76U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x75U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x74U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x73U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x72U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x71U]);
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U] 
                                     << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U] 
                                               >> 0x17U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                        = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U] 
                                     << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U] 
                                                  >> 0x10U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                        = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U] 
                                     << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U] 
                                                  >> 7U)));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                        = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x70U]);
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x6aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x69U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x68U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x67U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x66U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x65U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x62U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U]);
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x5aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x59U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x58U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x57U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x56U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x55U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x54U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x53U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x52U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x51U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x50U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x49U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x48U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x47U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x46U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x45U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x44U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x43U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x42U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x41U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x40U]);
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3fU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3eU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3dU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3cU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3bU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x3aU]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x39U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U]);
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x35U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x34U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x33U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x32U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x31U]);
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                 << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                           >> 0x17U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                    = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                 << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                              >> 0x10U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                    = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                 << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U] 
                                              >> 7U)));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                    = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x30U]);
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x2aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x29U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x28U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x27U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x26U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x25U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x24U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x23U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x22U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x21U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x20U]);
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1fU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1eU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1dU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1cU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1bU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x1aU]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x19U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x18U]);
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x17U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x16U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x15U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x14U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x13U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x12U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x11U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                             << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                                       >> 0x17U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
                = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                             << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                                          >> 0x10U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
                = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                             << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U] 
                                          >> 7U)));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
                = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x10U]);
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_input_chunk_idx))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xfU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xeU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xdU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xcU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xbU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0xaU]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[9U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[8U]);
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq469 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq470 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_BITS_3_TO_0_CONCAT_15_ETC___05Fq471 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x730757_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731084_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731411_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x731738_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732065_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732392_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x732719_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733046_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733373_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x733700_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734027_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734354_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x734681_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735008_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x735335_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0U]);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024RDY_get_result 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__computing)) 
           & (0x8000001fU <= (0x80000000U ^ vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_58 
        = ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           | (0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0_ready_AND_brams_1_ready_AND_brams_2_re_ETC___05F_d171 
        = (((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_isReady) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_isReady) 
                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_3__DOT__loader_isReady) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_4__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_5__DOT__loader_isReady) 
                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_6__DOT__loader_isReady))))))) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_7__DOT__loader_isReady) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_8__DOT__loader_isReady) 
                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_10__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_9__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_11__DOT__loader_isReady) 
                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_12__DOT__loader_isReady))))))) 
                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_13__DOT__loader_isReady) 
                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_14__DOT__loader_isReady) 
                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_15__DOT__loader_isReady) 
                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_16__DOT__loader_isReady) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_17__DOT__loader_isReady) 
                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_18__DOT__loader_isReady))))))) 
                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_19__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_20__DOT__loader_isReady) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_21__DOT__loader_isReady) 
                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_22__DOT__loader_isReady) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_23__DOT__loader_isReady) 
                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_24__DOT__loader_isReady))))))) 
                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_25__DOT__loader_isReady) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_26__DOT__loader_isReady) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_27__DOT__loader_isReady) 
                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_28__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_29__DOT__loader_isReady) 
                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_30__DOT__loader_isReady))))))) 
                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_31__DOT__loader_isReady) 
                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_32__DOT__loader_isReady) 
                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_33__DOT__loader_isReady) 
                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_34__DOT__loader_isReady) 
                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_35__DOT__loader_isReady) 
                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_36__DOT__loader_isReady))))))) 
                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_37__DOT__loader_isReady) 
                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_38__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_39__DOT__loader_isReady) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_40__DOT__loader_isReady) 
                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_41__DOT__loader_isReady) 
                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_42__DOT__loader_isReady))))))) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_43__DOT__loader_isReady) 
                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_44__DOT__loader_isReady) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_45__DOT__loader_isReady) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_46__DOT__loader_isReady) 
                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_47__DOT__loader_isReady) 
                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_48__DOT__loader_isReady))))))) 
                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_49__DOT__loader_isReady) 
                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_50__DOT__loader_isReady) 
                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_51__DOT__loader_isReady) 
                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_52__DOT__loader_isReady) 
                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_53__DOT__loader_isReady) 
                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_54__DOT__loader_isReady))))))) 
               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_55__DOT__loader_isReady) 
                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_56__DOT__loader_isReady) 
                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_57__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_58__DOT__loader_isReady) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_59__DOT__loader_isReady) 
                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_60__DOT__loader_isReady))))))) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_61__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_62__DOT__loader_isReady) 
                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_63__DOT__loader_isReady) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_64__DOT__loader_isReady) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_65__DOT__loader_isReady) 
                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_66__DOT__loader_isReady))))))) 
             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_67__DOT__loader_isReady) 
                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_68__DOT__loader_isReady) 
                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_69__DOT__loader_isReady) 
                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_70__DOT__loader_isReady) 
                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_71__DOT__loader_isReady) 
                            & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_72__DOT__loader_isReady))))))) 
            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_73__DOT__loader_isReady) 
               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_74__DOT__loader_isReady) 
                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_75__DOT__loader_isReady) 
                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_76__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_77__DOT__loader_isReady) 
                           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_78__DOT__loader_isReady))))))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_79__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_80__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_81__DOT__loader_isReady) 
                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_82__DOT__loader_isReady) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_83__DOT__loader_isReady) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_84__DOT__loader_isReady)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0_ready_AND_brams_1_ready_AND_brams_2_re_ETC___05F_d171 
        = (((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_3__DOT__loader_isReady) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_4__DOT__loader_isReady) 
                                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_5__DOT__loader_isReady) 
                                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_6__DOT__loader_isReady))))))) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_7__DOT__loader_isReady) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_8__DOT__loader_isReady) 
                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_10__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_9__DOT__loader_isReady) 
                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_11__DOT__loader_isReady) 
                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_12__DOT__loader_isReady))))))) 
                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_13__DOT__loader_isReady) 
                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_14__DOT__loader_isReady) 
                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_15__DOT__loader_isReady) 
                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_16__DOT__loader_isReady) 
                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_17__DOT__loader_isReady) 
                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_18__DOT__loader_isReady))))))) 
                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_19__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_20__DOT__loader_isReady) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_21__DOT__loader_isReady) 
                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_22__DOT__loader_isReady) 
                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_23__DOT__loader_isReady) 
                                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_24__DOT__loader_isReady))))))) 
                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_25__DOT__loader_isReady) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_26__DOT__loader_isReady) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_27__DOT__loader_isReady) 
                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_28__DOT__loader_isReady) 
                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_29__DOT__loader_isReady) 
                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_30__DOT__loader_isReady))))))) 
                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_31__DOT__loader_isReady) 
                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_32__DOT__loader_isReady) 
                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_33__DOT__loader_isReady) 
                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_34__DOT__loader_isReady) 
                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_35__DOT__loader_isReady) 
                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_36__DOT__loader_isReady))))))) 
                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_37__DOT__loader_isReady) 
                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_38__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_39__DOT__loader_isReady) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_40__DOT__loader_isReady) 
                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_41__DOT__loader_isReady) 
                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_42__DOT__loader_isReady))))))) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_43__DOT__loader_isReady) 
                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_44__DOT__loader_isReady) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_45__DOT__loader_isReady) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_46__DOT__loader_isReady) 
                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_47__DOT__loader_isReady) 
                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_48__DOT__loader_isReady))))))) 
                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_49__DOT__loader_isReady) 
                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_50__DOT__loader_isReady) 
                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_51__DOT__loader_isReady) 
                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_52__DOT__loader_isReady) 
                            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_53__DOT__loader_isReady) 
                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_54__DOT__loader_isReady))))))) 
               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_55__DOT__loader_isReady) 
                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_56__DOT__loader_isReady) 
                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_57__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_58__DOT__loader_isReady) 
                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_59__DOT__loader_isReady) 
                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_60__DOT__loader_isReady))))))) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_61__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_62__DOT__loader_isReady) 
                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_63__DOT__loader_isReady) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_64__DOT__loader_isReady) 
                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_65__DOT__loader_isReady) 
                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_66__DOT__loader_isReady))))))) 
             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_67__DOT__loader_isReady) 
                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_68__DOT__loader_isReady) 
                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_69__DOT__loader_isReady) 
                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_70__DOT__loader_isReady) 
                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_71__DOT__loader_isReady) 
                            & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_72__DOT__loader_isReady))))))) 
            & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_73__DOT__loader_isReady) 
               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_74__DOT__loader_isReady) 
                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_75__DOT__loader_isReady) 
                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_76__DOT__loader_isReady) 
                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_77__DOT__loader_isReady) 
                           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_78__DOT__loader_isReady))))))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_79__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_80__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_81__DOT__loader_isReady) 
                    & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_82__DOT__loader_isReady) 
                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_83__DOT__loader_isReady) 
                          & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_84__DOT__loader_isReady)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_addr) 
                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_base_addr)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_62 
        = ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
           | (0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)));
    __Vtableidx8 = vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_chunk_id;
    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_readback_chunk_id_0_0_1_256_2_512_3_0_0___05Fq1 
        = VmkTb_COP__ConstPool__TABLE_h5e3a9629_0[__Vtableidx8];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__activation_out_reg) 
                                                      >> 7U)))));
    if ((0x20U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                      >> 0x1fU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x177U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x167U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x157U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x147U] 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x137U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x127U] 
                                                      >> 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x117U] 
                                                      >> 0xfU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10fU] 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x107U] 
                                                      >> 0xfU))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x176U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x166U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x15eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x156U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x14eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x146U] 
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
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x13eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x136U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x12eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x126U] 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x11eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x116U] 
                                                      >> 0x1fU))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))
                                                      ? 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x10eU] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x106U] 
                                                      >> 0x1fU))))))));
    } else if ((0x10U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xffU] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfeU] 
                                     >> 0x1fU));
                    } else {
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                     >> 0x1fU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf7U] 
                                     >> 0xfU));
                        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xf6U] 
                                     >> 0x1fU));
                    }
                } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xefU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeeU] 
                                 >> 0x1fU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xe6U] 
                                 >> 0x1fU));
                }
            } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdfU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xdeU] 
                                 >> 0x1fU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xd6U] 
                                 >> 0x1fU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xcfU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xceU] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xc6U] 
                             >> 0x1fU));
            }
        } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbfU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xbeU] 
                                 >> 0x1fU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb7U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xb6U] 
                                 >> 0x1fU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xafU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xaeU] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa7U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xa6U] 
                             >> 0x1fU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x9eU] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x97U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x96U] 
                             >> 0x1fU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x8eU] 
                         >> 0x1fU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x87U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x86U] 
                         >> 0x1fU));
        }
    } else if ((8U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7fU] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x7eU] 
                                 >> 0x1fU));
                } else {
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                 >> 0x1fU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x77U] 
                                 >> 0xfU));
                    vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                        = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x76U] 
                                 >> 0x1fU));
                }
            } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x6eU] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x67U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x66U] 
                             >> 0x1fU));
            }
        } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x5eU] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x57U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x56U] 
                             >> 0x1fU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x4eU] 
                         >> 0x1fU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x47U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x46U] 
                         >> 0x1fU));
        }
    } else if ((4U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3fU] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x3eU] 
                             >> 0x1fU));
            } else {
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                             >> 0x1fU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x37U] 
                             >> 0xfU));
                vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                    = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x36U] 
                             >> 0x1fU));
            }
        } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x2eU] 
                         >> 0x1fU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x27U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x26U] 
                         >> 0x1fU));
        }
    } else if ((2U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1fU] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x1eU] 
                         >> 0x1fU));
        } else {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                         >> 0x1fU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x17U] 
                         >> 0xfU));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
                = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0x16U] 
                         >> 0x1fU));
        }
    } else if ((1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif_chunk_fed))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xfU] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[0xeU] 
                     >> 0x1fU));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2141731_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq517 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2182511_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq520 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x2183334_0_sa_result_o_BIT_15_1_sa_result_ETC___05Fq523 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa_result_o[6U] 
                     >> 0x1fU));
    }
}
