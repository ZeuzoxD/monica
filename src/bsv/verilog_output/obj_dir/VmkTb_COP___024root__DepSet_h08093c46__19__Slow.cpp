// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_ATTR_COLD void VmkTb_COP___024root___stl_sequent__TOP__18(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___stl_sequent__TOP__18\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_174_TO_167_007_ULT_sa_ETC___05F_d6022) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_174_TO_167_007_ULT_ETC___05F_d6024 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5589771 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_174_TO_167_007_ULT_ETC___05F_d6024 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5589771 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_190_TO_183_882_ULT_sa_ETC___05F_d5897) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588987 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588963 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_190_TO_183_882_ULT_ETC___05F_d5899 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5588904 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588987 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588963 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_190_TO_183_882_ULT_ETC___05F_d5899 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5588904 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[5U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_206_TO_199_756_ULT_sa_ETC___05F_d5771) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588120 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588096 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_206_TO_199_756_ULT_ETC___05F_d5773 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5588037 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5588120 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5588096 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_206_TO_199_756_ULT_ETC___05F_d5773 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5588037 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_222_TO_215_631_ULT_sa_ETC___05F_d5646) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5587253 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5587229 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_222_TO_215_631_ULT_ETC___05F_d5648 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5587170 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5587253 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5587229 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_222_TO_215_631_ULT_ETC___05F_d5648 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5587170 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_238_TO_231_505_ULT_sa_ETC___05F_d5520) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5586386 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5586362 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_238_TO_231_505_ULT_ETC___05F_d5522 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5586303 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5586386 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5586362 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_238_TO_231_505_ULT_ETC___05F_d5522 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5586303 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_254_TO_247_379_ULT_sa_ETC___05F_d5395) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5585519 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5585495 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_254_TO_247_379_ULT_ETC___05F_d5397 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5585436 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5585519 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5585495 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_254_TO_247_379_ULT_ETC___05F_d5397 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5585436 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_30_TO_23_137_ULT_sa_g_ETC___05F_d7152) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5597657 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5597633 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_30_TO_23_137_ULT_s_ETC___05F_d7154 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5597574 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5597657 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5597633 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_30_TO_23_137_ULT_s_ETC___05F_d7154 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5597574 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_46_TO_39_011_ULT_sa_g_ETC___05F_d7026) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5596790 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5596766 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_46_TO_39_011_ULT_s_ETC___05F_d7028 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5596707 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5596790 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5596766 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_46_TO_39_011_ULT_s_ETC___05F_d7028 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5596707 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_62_TO_55_886_ULT_sa_g_ETC___05F_d6901) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5595923 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5595899 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_62_TO_55_886_ULT_s_ETC___05F_d6903 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5595840 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5595923 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5595899 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_62_TO_55_886_ULT_s_ETC___05F_d6903 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5595840 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_78_TO_71_760_ULT_sa_g_ETC___05F_d6775) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5595056 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5595032 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_78_TO_71_760_ULT_s_ETC___05F_d6777 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5594973 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5595056 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5595032 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_78_TO_71_760_ULT_s_ETC___05F_d6777 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5594973 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator_378_BITS_94_TO_87_635_ULT_sa_g_ETC___05F_d6650) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5594189 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5594165 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_94_TO_87_635_ULT_s_ETC___05F_d6652 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5594106 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5594189 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5594165 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_accumulator_378_BITS_94_TO_87_635_ULT_s_ETC___05F_d6652 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5594106 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[2U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_110_TO_103_0063_ULT_s_ETC___05F_d10071) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5745585 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5745561 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_110_TO_103_0063_UL_ETC___05F_d10073 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5745502 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5745585 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5745561 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_110_TO_103_0063_UL_ETC___05F_d10073 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5745502 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_6) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_126_TO_119_946_ULT_sa_ETC___05F_d9954) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5744718 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5744694 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_126_TO_119_946_ULT_ETC___05F_d9956 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5744635 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5744718 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5744694 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_126_TO_119_946_ULT_ETC___05F_d9956 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5744635 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_7) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_142_TO_135_828_ULT_sa_ETC___05F_d9836) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5743851 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5743827 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_142_TO_135_828_ULT_ETC___05F_d9838 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5743768 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5743851 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5743827 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_142_TO_135_828_ULT_ETC___05F_d9838 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5743768 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_8) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_14_TO_7_0768_ULT_sa_g_ETC___05F_d10776) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5750787 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5750763 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_14_TO_7_0768_ULT_s_ETC___05F_d10778 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5750704 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5750787 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5750763 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_14_TO_7_0768_ULT_s_ETC___05F_d10778 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5750704 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_0) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_158_TO_151_711_ULT_sa_ETC___05F_d9719) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5742984 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5742960 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_158_TO_151_711_ULT_ETC___05F_d9721 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5742901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5742984 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5742960 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_158_TO_151_711_ULT_ETC___05F_d9721 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5742901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_9) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_174_TO_167_593_ULT_sa_ETC___05F_d9601) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5742117 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5742093 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_174_TO_167_593_ULT_ETC___05F_d9603 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5742034 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5742117 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5742093 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_174_TO_167_593_ULT_ETC___05F_d9603 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5742034 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_10) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_190_TO_183_476_ULT_sa_ETC___05F_d9484) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5741250 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5741226 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_190_TO_183_476_ULT_ETC___05F_d9486 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5741167 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5741250 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5741226 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_190_TO_183_476_ULT_ETC___05F_d9486 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5741167 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_11) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_206_TO_199_358_ULT_sa_ETC___05F_d9366) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5740383 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5740359 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_206_TO_199_358_ULT_ETC___05F_d9368 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5740300 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5740383 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5740359 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_206_TO_199_358_ULT_ETC___05F_d9368 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5740300 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_12) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_222_TO_215_241_ULT_sa_ETC___05F_d9249) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5739516 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5739492 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_222_TO_215_241_ULT_ETC___05F_d9251 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5739433 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5739516 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5739492 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_222_TO_215_241_ULT_ETC___05F_d9251 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5739433 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_13) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_238_TO_231_123_ULT_sa_ETC___05F_d9131) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5738649 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5738625 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_238_TO_231_123_ULT_ETC___05F_d9133 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5738566 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5738649 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5738625 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_238_TO_231_123_ULT_ETC___05F_d9133 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5738566 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_14) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_254_TO_247_006_ULT_sa_ETC___05F_d9014) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5737782 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5737758 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_254_TO_247_006_ULT_ETC___05F_d9016 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5737699 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5737782 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5737758 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_254_TO_247_006_ULT_ETC___05F_d9016 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5737699 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_15) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_30_TO_23_0651_ULT_sa___05FETC___05F_d10659) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5749920 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5749896 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_30_TO_23_0651_ULT___05FETC___05F_d10661 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5749837 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5749920 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5749896 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_30_TO_23_0651_ULT___05FETC___05F_d10661 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5749837 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_1) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_46_TO_39_0533_ULT_sa___05FETC___05F_d10541) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5749053 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5749029 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_46_TO_39_0533_ULT___05FETC___05F_d10543 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5748970 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5749053 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5749029 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_46_TO_39_0533_ULT___05FETC___05F_d10543 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5748970 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_2) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_62_TO_55_0416_ULT_sa___05FETC___05F_d10424) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5748186 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5748162 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_62_TO_55_0416_ULT___05FETC___05F_d10426 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5748103 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5748186 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5748162 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_62_TO_55_0416_ULT___05FETC___05F_d10426 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5748103 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_3) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_78_TO_71_0298_ULT_sa___05FETC___05F_d10306) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5747319 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5747295 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_78_TO_71_0298_ULT___05FETC___05F_d10308 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5747236 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U])), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                     >> 7U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5747319 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                         << 0x19U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                      >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5747295 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_78_TO_71_0298_ULT___05FETC___05F_d10308 
            = (0x7fU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5747236 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   >> 7U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_4) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator_005_BITS_94_TO_87_0181_ULT_sa___05FETC___05F_d10189) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5746452 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5746428 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_94_TO_87_0181_ULT___05FETC___05F_d10191 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5746369 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   >> 0x10U))), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                >> 7U) 
                                               - ((
                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   << 9U) 
                                                  | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                     >> 0x17U))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT___theResult___05F_fst_exp___05Fh5746452 
            = (0xffU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                         << 9U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                   >> 0x17U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__result_sign___05Fh5746428 
            = (1U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                     >> 0x1fU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_accumulator_005_BITS_94_TO_87_0181_ULT___05FETC___05F_d10191 
            = (0x7fU & ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                         << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                      >> 0x10U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__smaller_m___05Fh5746369 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5))), 
                                     (0xffU & (((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                 << 9U) 
                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                                   >> 0x17U)) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_matrix_5) 
                                                  >> 7U)))));
    }
    vlSelfRef.__VdfgRegularize_h6171c202_0_7 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_8 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_9 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_10 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_11 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_12 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_13 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_14 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_15 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_16 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_17 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_18 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_19 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_20 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_21 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_22 = (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214) 
                                                  << 7U) 
                                                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_28 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_6_TO_0_15_v_t_1_8_BITS_6___05FETC___05F_d264)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__WILL_FIRE_RL_collectResponses 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2_RDY_requestB___05F17_AND_brams_3_RDY_reque_ETC___05F_d625) 
                    & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__state)) 
                       & ((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount)) 
                          & (4U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__cycleCount))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__MUX_state__024write_1___05FPSEL_1 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__brams_2_RDY_requestB___05F17_AND_brams_3_RDY_reque_ETC___05F_d625) 
                    & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__state)) 
                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa1__DOT__allReady))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__WILL_FIRE_RL_collectResponses 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2_RDY_requestB___05F17_AND_brams_3_RDY_reque_ETC___05F_d625) 
                    & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__state)) 
                       & ((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount)) 
                          & (4U >= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__cycleCount))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__MUX_state__024write_1___05FPSEL_1 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_0__DOT__loader_isReady) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_1__DOT__loader_isReady) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2__DOT__loader_isReady) 
                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__brams_2_RDY_requestB___05F17_AND_brams_3_RDY_reque_ETC___05F_d625) 
                    & ((1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__state)) 
                       & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__weight_loader_sa2__DOT__allReady))))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46465[0U] 
        = ((((0xb9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xb8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46465[1U] 
        = ((((0xbbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xbaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46465[2U] 
        = ((((0xbdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xbcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46465[3U] 
        = ((((0xbfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xbeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x5fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46465[4U] 
        = ((((0xc1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0xc0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x60U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46465[5U] 
        = (0xffffU & ((0xc2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x61U]));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__exp_sum___05Fh19115 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh12136))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh12136)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh12139))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh12139))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh12136)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_mant___05Fh12137)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh12139)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_mant___05Fh12140)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__exp_sum___05Fh26798 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh19822))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh19822)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh19825))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh19825))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_exp___05Fh19822)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__a_mant___05Fh19823)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_exp___05Fh19825)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd0__DOT__b_mant___05Fh19826)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__exp_sum___05Fh19115 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh12136)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh12137)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh12139)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh12140)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__exp_sum___05Fh26798 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_exp___05Fh19822)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__a_mant___05Fh19823)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_exp___05Fh19825)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd1__DOT__b_mant___05Fh19826)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__exp_sum___05Fh19115 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh12136)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh12137)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh12139)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh12140)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__exp_sum___05Fh26798 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_exp___05Fh19822)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__a_mant___05Fh19823)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_exp___05Fh19825)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd2__DOT__b_mant___05Fh19826)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__exp_sum___05Fh19115 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_a_64_BITS_14_TO_7_99___05FETC___05F_d676 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh12136)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh12137)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh12139)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh12140)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__exp_sum___05Fh26798 
        = (0x1ffU & (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822))
                       ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822)) 
                     + ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825))
                         ? 1U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT___0_CONCAT_NOT_SEL_ARR_reg_c_73_BITS_14_TO_7_008_ETC___05F_d1285 
        = ((((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_exp___05Fh19822)) 
             << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__a_mant___05Fh19823)) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_exp___05Fh19825)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__pipeline__DOT__simd3__DOT__b_mant___05Fh19826)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed))));
    vlSelfRef.__VdfgRegularize_h6171c202_0_1 = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r__024EN) 
                                                | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v__024EN) 
                                                   | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024EN)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x691395_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq127) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x691395_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq128) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x691395_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq129) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x692218_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq130) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x692218_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq131) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x692218_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq132))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[1U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x689749_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq121) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x689749_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq122) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x689749_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq123) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x690572_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq124) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x690572_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq125) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x690572_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq126))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[2U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688103_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq115) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688103_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq116) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688103_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq117) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688926_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq118) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688926_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq119) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688926_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq120))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[3U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x686457_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq109) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x686457_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq110) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x686457_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq111) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x687280_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq112) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x687280_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq113) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x687280_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq114))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[4U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x684811_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq103) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x684811_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq104) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x684811_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq105) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x685634_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq106) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x685634_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq107) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x685634_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq108))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[5U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683165_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq97) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683165_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq98) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683165_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq99) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683988_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq100) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683988_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq101) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683988_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq102))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[6U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x681519_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq91) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x681519_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq92) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x681519_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq93) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x682342_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq94) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x682342_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq95) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x682342_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq96))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[7U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679873_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq85) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679873_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq86) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679873_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq87) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x680696_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq88) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x680696_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq89) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x680696_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq90))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[8U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x678227_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq79) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x678227_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq80) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x678227_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq81) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679050_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq82) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679050_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq83) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679050_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq84))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[9U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x676581_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq73) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x676581_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq74) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x676581_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq75) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x677404_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq76) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x677404_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq77) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x677404_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq78))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xaU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674935_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq67) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674935_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq68) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674935_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq69) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x675758_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq70) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x675758_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq71) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x675758_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq72))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xbU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x673289_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq61) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x673289_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq62) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x673289_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq63) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674112_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq64) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674112_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq65) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674112_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq66))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xcU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x671643_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq55) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x671643_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq56) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x671643_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq57) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x672466_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq58) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x672466_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq59) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x672466_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq60))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xdU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669997_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq49) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669997_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq50) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669997_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq51) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x670820_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq52) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x670820_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq53) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x670820_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq54))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xeU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668351_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq43) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668351_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq44) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668351_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq45) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669174_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq46) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669174_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq47) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669174_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq48))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_1[0xfU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x694727_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq37) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x694727_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq38) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x694727_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq39) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667528_0_tsc_pp_BIT_15_1_tsc_pp_BIT_31_2_ETC___05Fq40) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667528_0_tsc_pp_BITS_14_TO_7_1_tsc_pp_BI_ETC___05Fq41) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667528_0_tsc_pp_BITS_6_TO_0_1_tsc_pp_BIT_ETC___05Fq42))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x027246_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq223) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x027246_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq224) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x027246_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq225) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x028069_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq226) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x028069_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq227) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x028069_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq228))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[1U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x025600_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq217) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x025600_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq218) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x025600_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq219) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x026423_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq220) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x026423_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq221) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x026423_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq222))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[2U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023954_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq211) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023954_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq212) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023954_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq213) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x024777_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq214) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x024777_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq215) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x024777_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq216))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[3U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x022308_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq205) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x022308_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq206) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x022308_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq207) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023131_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq208) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023131_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq209) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023131_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq210))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[4U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x020662_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq199) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x020662_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq200) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x020662_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq201) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x021485_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq202) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x021485_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq203) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x021485_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq204))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[5U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019016_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq193) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019016_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq194) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019016_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq195) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019839_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq196) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019839_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq197) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019839_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq198))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[6U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x017370_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq187) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x017370_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq188) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x017370_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq189) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x018193_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq190) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x018193_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq191) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x018193_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq192))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[7U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x015724_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq181) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x015724_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq182) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x015724_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq183) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x016547_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq184) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x016547_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq185) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x016547_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq186))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[8U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014078_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq175) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014078_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq176) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014078_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq177) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014901_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq178) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014901_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq179) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014901_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq180))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[9U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x012432_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq169) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x012432_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq170) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x012432_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq171) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x013255_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq172) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x013255_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq173) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x013255_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq174))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xaU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq163) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq164) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq165) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x011609_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq166) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x011609_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq167) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x011609_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq168))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xbU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq157) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq158) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq159) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq160) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq161) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq162))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xcU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq151) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq152) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq153) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq154) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq155) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq156))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xdU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq145) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq146) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq147) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq148) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq149) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq150))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xeU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq139) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq140) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq141) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq142) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq143) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq144))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_1___05FVAL_2[0xfU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq133) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq134) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq135) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BIT_15_1_tsc_nts_ww___05FETC___05Fq136) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_14_TO_7_1_tsc_n_ETC___05Fq137) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_tsc_nts_ww_BITS_6_TO_0_1_tsc_nt_ETC___05Fq138))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x691395_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq319) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x691395_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq320) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x691395_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq321) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x692218_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq322) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x692218_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq323) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x692218_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq324))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[1U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x689749_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq313) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x689749_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq314) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x689749_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq315) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x690572_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq316) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x690572_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq317) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x690572_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq318))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[2U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688103_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq307) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688103_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq308) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688103_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq309) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688926_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq310) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688926_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq311) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x688926_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq312))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[3U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x686457_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq301) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x686457_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq302) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x686457_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq303) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x687280_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq304) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x687280_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq305) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x687280_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq306))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[4U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x684811_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq295) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x684811_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq296) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x684811_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq297) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x685634_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq298) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x685634_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq299) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x685634_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq300))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[5U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683165_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq289) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683165_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq290) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683165_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq291) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683988_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq292) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683988_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq293) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x683988_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq294))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[6U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x681519_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq283) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x681519_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq284) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x681519_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq285) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x682342_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq286) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x682342_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq287) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x682342_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq288))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[7U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679873_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq277) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679873_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq278) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679873_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq279) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x680696_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq280) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x680696_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq281) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x680696_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq282))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[8U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x678227_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq271) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x678227_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq272) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x678227_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq273) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679050_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq274) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679050_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq275) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x679050_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq276))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[9U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x676581_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq265) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x676581_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq266) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x676581_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq267) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x677404_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq268) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x677404_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq269) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x677404_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq270))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xaU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674935_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq259) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674935_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq260) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674935_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq261) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x675758_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq262) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x675758_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq263) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x675758_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq264))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xbU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x673289_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq253) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x673289_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq254) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x673289_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq255) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674112_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq256) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674112_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq257) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x674112_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq258))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xcU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x671643_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq247) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x671643_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq248) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x671643_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq249) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x672466_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq250) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x672466_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq251) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x672466_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq252))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xdU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669997_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq241) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669997_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq242) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669997_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq243) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x670820_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq244) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x670820_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq245) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x670820_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq246))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xeU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668351_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq235) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668351_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq236) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x668351_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq237) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669174_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq238) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669174_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq239) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x669174_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq240))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_1[0xfU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x694727_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq229) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x694727_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq230) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x694727_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq231) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667528_0_tsc_cts_ww_BIT_15_1_tsc_cts_ww___05FETC___05Fq232) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667528_0_tsc_cts_ww_BITS_14_TO_7_1_tsc_c_ETC___05Fq233) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x667528_0_tsc_cts_ww_BITS_6_TO_0_1_tsc_ct_ETC___05Fq234))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x027246_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq415) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x027246_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq416) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x027246_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq417) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x028069_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq418) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x028069_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq419) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x028069_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq420))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[1U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x025600_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq409) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x025600_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq410) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x025600_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq411) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x026423_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq412) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x026423_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq413) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x026423_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq414))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[2U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023954_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq403) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023954_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq404) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023954_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq405) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x024777_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq406) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x024777_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq407) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x024777_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq408))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[3U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x022308_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq397) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x022308_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq398) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x022308_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq399) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023131_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq400) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023131_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq401) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x023131_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq402))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[4U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x020662_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq391) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x020662_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq392) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x020662_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq393) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x021485_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq394) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x021485_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq395) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x021485_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq396))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[5U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019016_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq385) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019016_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq386) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019016_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq387) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019839_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq388) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019839_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq389) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x019839_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq390))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[6U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x017370_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq379) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x017370_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq380) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x017370_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq381) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x018193_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq382) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x018193_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq383) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x018193_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq384))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[7U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x015724_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq373) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x015724_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq374) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x015724_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq375) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x016547_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq376) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x016547_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq377) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x016547_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq378))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[8U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014078_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq367) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014078_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq368) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014078_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq369) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014901_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq370) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014901_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq371) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x014901_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq372))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[9U] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x012432_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq361) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x012432_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq362) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x012432_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq363) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x013255_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq364) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x013255_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq365) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x013255_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq366))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xaU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq355) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq356) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x010786_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq357) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x011609_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq358) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x011609_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq359) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x011609_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq360))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xbU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq349) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq350) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009140_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq351) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq352) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq353) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x009963_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq354))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xcU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq343) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq344) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x007494_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq345) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq346) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq347) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x008317_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq348))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xdU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq337) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq338) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005848_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq339) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq340) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq341) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x006671_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq342))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xeU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq331) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq332) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x004202_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq333) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq334) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq335) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x005025_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq336))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_mse__024feed_input_2___05FVAL_2[0xfU] 
        = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq325) 
             << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq326) 
                           << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x030578_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq327) 
                                        << 0x10U))) 
           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_sa_result_k_BIT_15_1_sa_result___05FETC___05Fq328) 
               << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_sa_result_k_BITS_14_TO_7_1_sa_r_ETC___05Fq329) 
                            << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x003379_0_sa_result_k_BITS_6_TO_0_1_sa_re_ETC___05Fq330))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d260) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                >> 0xcU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                             >> 0x14U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                >> 5U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                           >> 0x15U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                        >> 0xcU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                          >> 0x1cU))))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___theResult___05F_fst_exp___05Fh2986 
            = (0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                >> 0x1cU)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__result_sign___05Fh2962 
            = (1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                             >> 0x24U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262 
            = (0x7fU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                >> 0x15U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__smaller_m___05Fh2901 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(
                                                          (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                           >> 5U)))), 
                                     (0xffU & ((IData)(
                                                       (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                        >> 0x1cU)) 
                                               - (IData)(
                                                         (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__stage2_data 
                                                          >> 0xcU))))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28261[0U] 
        = ((((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28261[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28254[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28261[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28254[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28261[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28254[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28261[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28254[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28261[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28254[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30267[0U] 
        = ((((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30267[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30260[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30267[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30260[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30267[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30260[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30267[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30260[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30267[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30260[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37191[0U] 
        = ((((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37191[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37186[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37191[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37186[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37191[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37186[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37191[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37186[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37191[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37186[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39188[0U] 
        = ((((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x17aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39188[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39183[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39188[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39183[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39188[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39183[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39188[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39183[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39188[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39183[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15564[0U] 
        = ((((0x2fcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2fbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x17dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15564[1U] 
        = (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15559);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15564[2U] 
        = (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15559 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17486[0U] 
        = ((((0x2fcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2fbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x17dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17486[1U] 
        = (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17481);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17486[2U] 
        = (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17481 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12880[0U] 
        = ((((0x2fcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2fbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x17dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12880[1U] 
        = (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12873);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12880[2U] 
        = (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d12873 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19408[0U] 
        = ((((0x2fcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2fbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x17dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19408[1U] 
        = (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19403);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19408[2U] 
        = (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19403 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21330[0U] 
        = ((((0x2fcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2fbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x17dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21330[1U] 
        = (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21325);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21330[2U] 
        = (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21325 
                   >> 0x20U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2417 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_k1) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_process_k0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_55 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_r0) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_v0));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2416 
        = (1U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_r__024EN)) 
                 & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_v__024EN)) 
                    & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__simd_result_k__024EN)) 
                       & (~ (IData)(vlSelfRef.mkTb_COP__DOT__started__024EN))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_started)) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_processing_complete) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__started__024EN)) 
                 & (4U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_state)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_nts_feed_mse 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024RDY_feed_input) 
           & ((0xbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_started) 
                 & (0x18U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_mse_chunk_fed)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_cts_feed_mse 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024RDY_feed_input) 
           & ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state)) 
              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_started) 
                 & (0x18U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_mse_chunk_fed)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_25 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq26)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq27)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh9926 
        = ((0x8000U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq25)) 
                       << 0xfU)) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq26) 
                                     << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq27)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_126_TO_119_ULT_compute_p_8_B_ETC___05F_d18 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq2) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq26));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_126_TO_119_020_ULT_compute_p_ETC___05F_d1028 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq50) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq26));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_20 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq29)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq30)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh10982 
        = ((0x8000U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq28)) 
                       << 0xfU)) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq29) 
                                     << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq30)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_110_TO_103_28_ULT_compute_p___05FETC___05F_d145 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq5) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq29));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_110_TO_103_137_ULT_compute_p_ETC___05F_d1145 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq53) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq29));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_55 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq32)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq33)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh11857 
        = ((0x8000U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq31)) 
                       << 0xfU)) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq32) 
                                     << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq33)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_94_TO_87_55_ULT_compute_p_8___05FETC___05F_d272 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq8) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq32));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_94_TO_87_254_ULT_compute_p_8_ETC___05F_d1262 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq56) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq32));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_50 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq35)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq36)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh12732 
        = ((0x8000U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq34)) 
                       << 0xfU)) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq35) 
                                     << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq36)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_78_TO_71_83_ULT_compute_p_8___05FETC___05F_d400 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq11) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq35));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_78_TO_71_372_ULT_compute_p_8_ETC___05F_d1380 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq59) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq35));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_45 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq38)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq39)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh13607 
        = ((0x8000U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq37)) 
                       << 0xfU)) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq38) 
                                     << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq39)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_62_TO_55_10_ULT_compute_p_8___05FETC___05F_d527 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq14) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq38));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_62_TO_55_489_ULT_compute_p_8_ETC___05F_d1497 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq62) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq38));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_40 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq41)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq42)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh14482 
        = ((0x8000U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq40)) 
                       << 0xfU)) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq41) 
                                     << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq42)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_46_TO_39_38_ULT_compute_p_8___05FETC___05F_d655 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq17) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq41));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_46_TO_39_607_ULT_compute_p_8_ETC___05F_d1615 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq65) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq41));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_35 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq44)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq45)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh15357 
        = ((0x8000U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq43)) 
                       << 0xfU)) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq44) 
                                     << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq45)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_30_TO_23_65_ULT_compute_p_8___05FETC___05F_d782 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq20) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq44));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_30_TO_23_724_ULT_compute_p_8_ETC___05F_d1732 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq68) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq44));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_30 
        = ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq47)) 
           & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq48)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh16232 
        = ((0x8000U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq46)) 
                       << 0xfU)) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq47) 
                                     << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_6_TO_0_ETC___05Fq48)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_14_TO_7_93_ULT_compute_p_8_B_ETC___05F_d910 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq23) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq47));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_14_TO_7_842_ULT_compute_p_8___05FETC___05F_d1850 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq71) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_14_TO___05FETC___05Fq47));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2408 
        = (1U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load)) 
                 & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_0_CONCAT_s1_zc1_15_BITS_14_TO_7_17_18_MINUS_ETC___05F_d246 
        = (0xffffU & ((0x800fU > (0xffffU & (0x8000U 
                                             ^ ((0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                    >> 7U)) 
                                                - (IData)(0x7fU)))))
                       ? ((0x8000U >= (0xffffU & (0x8000U 
                                                  ^ 
                                                  ((IData)(0xfU) 
                                                   - 
                                                   ((0xffU 
                                                     & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1) 
                                                        >> 7U)) 
                                                    - (IData)(0x7fU))))))
                           ? ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__integer_part___05Fh2009))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__integer_part___05Fh2009))
                           : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1))
                               ? (- (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241))
                               : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_0b1_CONCAT_s1_zc1_15_BITS_6_TO_0_26_CONCAT___05FETC___05F_d241)))
                       : ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__s1_zc1))
                           ? 0x8000U : 0x7fffU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2421 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r2_load)) 
           & (0x21U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2423 
        = (1U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_r0)) 
                 & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_3 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r2_load) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r1_load));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2407 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2424 
        = (1U & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load)) 
                 & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_v0))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2426 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k2_load)) 
           & ((9U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k1_load)) 
                 & ((5U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                    & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load)) 
                       & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_3 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k2_load) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k1_load));
    vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2425 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v2_load)) 
           & (0x15U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_3 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v2_load) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v1_load));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
}
