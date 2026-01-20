// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__154(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__154\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg) 
                     >> 0xfU)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0U] 
        = ((((0x2ceU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x166U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x166U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x166U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15674[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0U] 
        = ((((0x2ceU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x166U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x166U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x166U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17596[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0U] 
        = ((((0x2ceU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x166U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x166U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x166U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13034[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0U] 
        = ((((0x2ceU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x166U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x166U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x166U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21440[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0U] 
        = ((((0x2ceU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x166U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x166U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x166U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19518[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_12__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_13__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_14__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_15__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_6__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_7__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_8__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_9__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__bigger_m___05Fh8439) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__smaller_m___05Fh8440));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667[0U] 
        = ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x105U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x105U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x10U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x105U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667[1U] 
        = ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x106U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x106U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x10U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x106U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667[2U] 
        = ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x10U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667[3U] 
        = ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x10U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U])));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x76U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667[(__Vilp1 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41647[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5520[0U] 
        = ((((0x205U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x102U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x102U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x204U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x102U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5520[1U] 
        = ((((0x207U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x103U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x103U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x206U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x103U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5520[2U] 
        = ((((0x209U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x104U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x104U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x208U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x104U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5520[3U] 
        = ((((0x20bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x105U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x105U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x20aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x105U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5520[4U] 
        = ((((0x20dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x106U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x106U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x20cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x106U])));
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x78U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5520[(__Vilp2 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5485[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0U] 
        = ((((0xcU == (0xfU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xcU == (0xfU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x64U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7534[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0U] 
        = ((((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x161U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x161U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37317[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0U] 
        = ((((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x161U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x161U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39308[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0U] 
        = ((((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x161U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x161U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28391[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0U] 
        = ((((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x161U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x161U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30391[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386[0U] 
        = ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x118U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x118U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x118U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386[1U] 
        = ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x119U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x119U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x119U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386[2U] 
        = ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386[3U] 
        = ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU])));
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x63U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386[(__Vilp3 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11366[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428))))))));
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__psum_out_reg = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428))))))));
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__psum_out_reg = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428))))))));
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__psum_out_reg = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428))))))));
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__psum_out_reg = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0U] 
        = ((((0x2ccU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x165U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x165U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x165U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15684[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15679[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0U] 
        = ((((0x2ccU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x165U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x165U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x165U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17606[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17601[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0U] 
        = ((((0x2ccU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x165U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x165U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x165U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13048[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13041[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0U] 
        = ((((0x2ccU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x165U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x165U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x165U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21450[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21445[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0U] 
        = ((((0x2ccU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x165U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x165U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2cbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x165U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19528[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19523[0x19U];
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
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
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_12__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_13__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_14__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_15__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_6__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_7__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_8__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_9__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__tmp___05Fh8446 
        = (0x1ffU & ((0x8000U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AND_s_ETC___05F_d943))
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__bigger_m___05Fh8439) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__smaller_m___05Fh8440))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__IF_IF_s2_input_z_93_BITS_14_TO_7_94_EQ_0_95_AN_ETC___05F_d959)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__smaller_m___05Fh8440) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__bigger_m___05Fh8439))
                          : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__bigger_m___05Fh8439) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__smaller_m___05Fh8440)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687[0U] 
        = ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x101U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x101U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x10U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x101U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687[1U] 
        = ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x102U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x102U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x10U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x102U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687[2U] 
        = ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x10U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687[3U] 
        = ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x10U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U])));
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x4eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687[(__Vilp4 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__tmp___05Fh1428))))))));
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg = 0U;
    }
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0x4fU;
    while ((__Vilp5 <= 0x7aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687[(__Vilp5 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5555[0U] 
        = ((((0x1fbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xfdU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xfdU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1faU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xfdU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5555[1U] 
        = ((((0x1fdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xfeU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xfeU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1fcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xfeU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5555[2U] 
        = ((((0x1ffU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xffU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xffU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1feU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xffU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5555[3U] 
        = ((((0x201U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x100U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x100U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x200U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x100U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5555[4U] 
        = ((((0x203U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x101U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x101U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x202U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x101U])));
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x7dU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5555[(__Vilp6 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5520[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0U] 
        = ((((0xcU == (0xfU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xcU == (0xfU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x63U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7544[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7539[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0U] 
        = ((((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x160U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x160U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37327[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37322[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0U] 
        = ((((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x160U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x160U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39318[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39313[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0U] 
        = ((((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x160U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x160U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28401[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28396[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0U] 
        = ((((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x160U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x160U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x58U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30401[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30396[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407[0U] 
        = ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x114U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x114U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x114U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407[1U] 
        = ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x115U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x115U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x115U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407[2U] 
        = ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407[3U] 
        = ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U])));
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x67U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407[(__Vilp7 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386[__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
}
