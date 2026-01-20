// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__156(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__156\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641 
        = (0x3ffU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)
                      ? ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU)))
                      : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634) 
                             - (IData)(0x7fU)) : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___theResult___05F_fst___05Fh973)
                                                        : 
                                                       (((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634) 
                                                             - (IData)(0x7fU)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)))
                                                       : 
                                                      ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634) 
                                                           - (IData)(0x7fU)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)))
                                                      : 
                                                     (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634) 
                                                         - (IData)(0x7fU)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)))
                                                     : 
                                                    ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634) 
                                                       - (IData)(0x7fU)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)))
                                                    : 
                                                   (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634) 
                                                     - (IData)(0x7fU)) 
                                                    - (IData)(1U)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_41 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728[0U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf9U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf9U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf9U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728[1U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfaU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfaU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfaU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728[2U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728[3U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU])));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x82U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728[(__Vilp1 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41708[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5625[0U] 
        = ((((0x1e7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf3U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1e6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf3U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5625[1U] 
        = ((((0x1e9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf4U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1e8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf4U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5625[2U] 
        = ((((0x1ebU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf5U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1eaU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf5U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5625[3U] 
        = ((((0x1edU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf6U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1ecU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf6U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5625[4U] 
        = ((((0x1efU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf7U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1eeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf7U])));
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x87U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5625[(__Vilp2 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5590[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0U] 
        = ((((0xcU == (0xfU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xcU == (0xfU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x61U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x24U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x26U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7549[0x25U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37333[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39323[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28407[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30406[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448[0U] 
        = ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448[1U] 
        = ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448[2U] 
        = ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448[3U] 
        = ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU])));
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x6fU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448[(__Vilp3 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11427[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? 0U : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__res_sign___05Fh483) 
                             << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_12)
                                          ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213))));
        }
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_0__024EN) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_0 
                = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[0U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_1 
                = (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[0U] 
                   >> 0x10U);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_10 
                = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[5U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_11 
                = (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[5U] 
                   >> 0x10U);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_12 
                = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[6U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_13 
                = (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[6U] 
                   >> 0x10U);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_14 
                = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[7U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_15 
                = (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[7U] 
                   >> 0x10U);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_2 
                = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[1U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_3 
                = (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[1U] 
                   >> 0x10U);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_4 
                = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[2U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_5 
                = (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[2U] 
                   >> 0x10U);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_6 
                = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[3U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_7 
                = (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[3U] 
                   >> 0x10U);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_8 
                = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[4U]);
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_9 
                = (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[4U] 
                   >> 0x10U);
        }
        if (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) 
             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024EN_start))) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count__024D_IN;
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_0 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_1 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_10 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_12 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_13 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_14 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_15 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_2 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_3 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_4 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_5 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_6 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_7 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_8 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_9 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg) 
                       >> 7U)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0U] 
        = ((((0x2c6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x162U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x162U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x162U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15694[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0U] 
        = ((((0x2c6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x162U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x162U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x162U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17616[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0U] 
        = ((((0x2c6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x162U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x162U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x162U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13062[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0U] 
        = ((((0x2c6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x162U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x162U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x162U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21460[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0U] 
        = ((((0x2c6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x162U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x162U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x162U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19538[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_12__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_13__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_14__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_15__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_5__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_6__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_7__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_8__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_9__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748[0U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf5U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf5U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf5U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748[1U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf6U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf6U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf6U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748[2U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748[3U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U])));
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x86U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748[(__Vilp4 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5660[0U] 
        = ((((0x1ddU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xeeU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xeeU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1dcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xeeU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5660[1U] 
        = ((((0x1dfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xefU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xefU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1deU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xefU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5660[2U] 
        = ((((0x1e1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf0U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1e0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf0U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5660[3U] 
        = ((((0x1e3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf1U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1e2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf1U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5660[4U] 
        = ((((0x1e5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf2U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1e4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xf2U])));
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x8cU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5660[(__Vilp5 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5625[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0U] 
        = ((((0xcU == (0xfU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xcU == (0xfU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x60U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x24U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x26U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x25U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7559[0x27U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7554[0x26U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37343[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37338[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39333[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39328[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28417[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28412[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30416[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30411[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468[0U] 
        = ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x108U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x108U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x108U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468[1U] 
        = ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x109U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x109U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x109U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468[2U] 
        = ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468[3U] 
        = ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU])));
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x73U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468[(__Vilp6 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0U] 
        = ((((0x2c4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x161U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x161U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15704[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15699[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0U] 
        = ((((0x2c4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x161U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x161U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17626[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17621[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0U] 
        = ((((0x2c4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x161U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x161U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13076[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13069[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0U] 
        = ((((0x2c4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x161U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x161U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21470[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21465[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0U] 
        = ((((0x2c4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x161U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x161U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19548[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19543[0x1dU];
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
}
