// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__123(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__123\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__psum_out_reg) 
                     >> 0xfU)));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_0__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_load_activations) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_load_activations));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_load_activations) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[0U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x571580_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq463) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x571580_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq464) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x571580_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq465) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x572403_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq466) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x572403_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq467) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x572403_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq468))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[1U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x569934_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq457) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x569934_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq458) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x569934_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq459) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x570757_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq460) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x570757_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq461) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x570757_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq462))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[2U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x568288_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq451) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x568288_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq452) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x568288_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq453) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x569111_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq454) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x569111_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq455) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x569111_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq456))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[3U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq445) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq446) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x566642_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq447) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq448) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq449) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x567465_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq450))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[4U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq439) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq440) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564996_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq441) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq442) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq443) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x565819_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq444))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[5U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq433) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq434) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x563350_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq435) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq436) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq437) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x564173_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq438))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[6U] 
            = (IData)((((QData)((IData)(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421) 
                                           << 0x1fU) 
                                          | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422) 
                                              << 0x17U) 
                                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423) 
                                                << 0x10U))) 
                                         | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424) 
                                             << 0xfU) 
                                            | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425) 
                                                << 7U) 
                                               | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427) 
                                                       << 0x1fU) 
                                                      | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428) 
                                                          << 0x17U) 
                                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429) 
                                                            << 0x10U))) 
                                                     | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430) 
                                                         << 0xfU) 
                                                        | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431) 
                                                            << 7U) 
                                                           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[7U] 
            = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq421) 
                                            << 0x1fU) 
                                           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq422) 
                                               << 0x17U) 
                                              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa1_input_chunk_idx_CONCAT_15_0_sa1_first_ETC___05Fq423) 
                                                 << 0x10U))) 
                                          | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq424) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq425) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x560881_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq426)))))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq427) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq428) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x561704_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq429) 
                                                             << 0x10U))) 
                                                      | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BIT_15_1_sa1_fi_ETC___05Fq430) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_14_TO_7_1___05FETC___05Fq431) 
                                                             << 7U) 
                                                            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x562527_0_sa1_first_input_BITS_6_TO_0_1_s_ETC___05Fq432))))))) 
                       >> 0x20U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[0U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq511) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq512) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712876_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq513) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq514) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq515) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x713123_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq516))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[1U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq505) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq506) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712382_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq507) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq508) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq509) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712629_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq510))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[2U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq499) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq500) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711888_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq501) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq502) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq503) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x712135_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq504))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[3U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq493) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq494) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711394_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq495) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq496) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq497) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711641_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq498))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[4U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq487) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq488) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710900_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq489) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq490) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq491) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x711147_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq492))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[5U] 
            = ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq481) 
                 << 0x1fU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq482) 
                               << 0x17U) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710406_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq483) 
                                            << 0x10U))) 
               | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq484) 
                   << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq485) 
                                << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710653_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq486))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[6U] 
            = (IData)((((QData)((IData)(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469) 
                                           << 0x1fU) 
                                          | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470) 
                                              << 0x17U) 
                                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471) 
                                                << 0x10U))) 
                                         | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472) 
                                             << 0xfU) 
                                            | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473) 
                                                << 7U) 
                                               | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474)))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475) 
                                                       << 0x1fU) 
                                                      | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476) 
                                                          << 0x17U) 
                                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477) 
                                                            << 0x10U))) 
                                                     | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478) 
                                                         << 0xfU) 
                                                        | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479) 
                                                            << 7U) 
                                                           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480))))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024load_activations_act[7U] 
            = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq469) 
                                            << 0x1fU) 
                                           | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq470) 
                                               << 0x17U) 
                                              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_sa2_input_chunk_idx_CONCAT_15_0_sa1_final_ETC___05Fq471) 
                                                 << 0x10U))) 
                                          | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq472) 
                                              << 0xfU) 
                                             | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq473) 
                                                 << 7U) 
                                                | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709665_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq474)))))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq475) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq476) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x709912_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq477) 
                                                             << 0x10U))) 
                                                      | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BIT_15_1_sa1_f_ETC___05Fq478) 
                                                          << 0xfU) 
                                                         | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_14_TO_7_1_ETC___05Fq479) 
                                                             << 7U) 
                                                            | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__CASE_x710159_0_sa1_final_output_BITS_6_TO_0_1___05FETC___05Fq480))))))) 
                       >> 0x20U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024EN_start 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_load_activations) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_load_activations));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0U] 
        = ((((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x38U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x24U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x26U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x25U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[0x27U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7555[0x26U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322[0U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf1U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf1U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf1U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322[1U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf2U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf2U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf2U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322[2U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322[3U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U])));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x8aU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322[(__Vilp1 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41302[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5695[0U] 
        = ((((0x1d3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe9U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1d2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe9U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5695[1U] 
        = ((((0x1d5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xeaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xeaU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1d4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xeaU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5695[2U] 
        = ((((0x1d7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xebU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xebU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1d6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xebU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5695[3U] 
        = ((((0x1d9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xecU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xecU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1d8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xecU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5695[4U] 
        = ((((0x1dbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xedU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xedU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1daU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xedU])));
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x91U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5695[(__Vilp2 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5660[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36897[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38887[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27971[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0U] 
        = ((((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15cU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15cU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x57U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29970[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043[0U] 
        = ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x104U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x104U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x104U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043[1U] 
        = ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x105U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x105U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x105U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043[2U] 
        = ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043[3U] 
        = ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U])));
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x77U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043[(__Vilp3 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11022[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__smaller_m___05Fh1422));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0U] 
        = ((((0x2c2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x160U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x160U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15258[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0U] 
        = ((((0x2c2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x160U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x160U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17180[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0U] 
        = ((((0x2c2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x160U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x160U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12630[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0U] 
        = ((((0x2c2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x160U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x160U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21024[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0U] 
        = ((((0x2c2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x160U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x160U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19102[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_12__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_13__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_14__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_15__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_3__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_4__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_5__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_6__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_7__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_8__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_9__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_stop_compute 
        = ((0x8000001fU <= (0x80000000U ^ vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) 
           & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024EN_start)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__computing) 
           & (0x8000001fU > (0x80000000U ^ vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh30727 
        = ((0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_0) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh30936 
        = ((1U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_1) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32529 
        = ((0xaU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_10) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32706 
        = ((0xbU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_11) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32883 
        = ((0xcU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_12) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh33060 
        = ((0xdU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_13) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh33237 
        = ((0xeU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_14) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh33414 
        = ((0xfU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_15) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31113 
        = ((2U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_2) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31290 
        = ((3U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_3) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31467 
        = ((4U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_4) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31644 
        = ((5U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_5) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31821 
        = ((6U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_6) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31998 
        = ((7U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_7) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32175 
        = ((8U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_8) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32352 
        = ((9U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_9) 
              >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__computing) 
           & (0x80000020U > (0x80000000U ^ vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024RDY_get_result 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__computing)) 
           & (0x8000001fU <= (0x80000000U ^ vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    if ((0U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_0));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_0) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((1U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_1));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_1) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((0xaU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_10));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_10) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((0xbU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_11));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_11) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((0xcU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_12));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_12) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((0xdU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_13));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_13) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((0xeU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_14));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_14) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((0xfU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_15));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_15) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((2U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_2));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_2) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((3U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_3));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_3) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((4U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_4));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_4) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((5U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_5));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_5) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((6U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_6));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_6) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((7U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_7));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_7) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((8U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_8));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_8) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    if ((9U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_11 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_9));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_9 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__mat_a_9) 
                        >> 7U));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_11 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_9 = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7566[0U] 
        = ((((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x37U])));
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x27U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7566[(__Vilp4 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7560[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343[0U] 
        = ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xedU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xedU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xeU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xedU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343[1U] 
        = ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeeU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeeU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xeU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeeU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343[2U] 
        = ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xeU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343[3U] 
        = ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xfU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U])));
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x8eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343[(__Vilp5 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5730[0U] 
        = ((((0x1c9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe4U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1c8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe4U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5730[1U] 
        = ((((0x1cbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe5U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1caU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe5U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5730[2U] 
        = ((((0x1cdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe6U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1ccU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe6U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5730[3U] 
        = ((((0x1cfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe7U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1ceU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe7U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5730[4U] 
        = ((((0x1d1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe8U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe8U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1d0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe8U])));
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x96U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5730[(__Vilp6 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5695[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0U] 
        = ((((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36902[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0U] 
        = ((((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38892[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0U] 
        = ((((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27976[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0U] 
        = ((((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15bU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15bU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15bU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29975[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063[0U] 
        = ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x100U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x100U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x100U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063[1U] 
        = ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x101U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x101U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x101U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063[2U] 
        = ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063[3U] 
        = ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U])));
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x7bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063[(__Vilp7 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043[__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__smaller_m___05Fh1422)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__res_sign___05Fh483)
                      ? (((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                          < (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_57))))
                          ? ((0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_57))) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_56)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                             - (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_57)))))
                      : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_56)) 
                         + (0xffU & VL_SHIFTR_III(8,8,8, 0x80U, (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT____VdfgRegularize_he5b7ae78_0_57))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0U] 
        = ((((0x2c0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x15fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x15fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2bfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x15fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15268[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15263[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0U] 
        = ((((0x2c0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x15fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x15fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2bfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x15fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17190[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17185[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0U] 
        = ((((0x2c0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x15fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x15fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2bfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x15fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12644[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12637[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0U] 
        = ((((0x2c0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x15fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x15fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2bfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x15fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21034[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21029[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0U] 
        = ((((0x2c0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x15fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x15fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2bfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x15fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19112[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19107[0x1fU];
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_0__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_0__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_1__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_1__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_12__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_12__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_13__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_12__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_13__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_14__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_13__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_14__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_15__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_15__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_14__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_15__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_2__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_1__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_2__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_2__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_3__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_2__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_3__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_3__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_4__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_3__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_4__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_4__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_5__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_4__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_5__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_5__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_6__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_5__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_6__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_6__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_7__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_6__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_7__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_7__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_8__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_7__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_8__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_8__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__tmp___05Fh1428 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__smaller_m___05Fh1422))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__smaller_m___05Fh1422) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_9__DOT__smaller_m___05Fh1422)))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg) 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__result_sign___05Fh1481 
            = (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg) 
                     >> 0xfU));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_56)), 
                                     (0xffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg) 
                                                >> 7U) 
                                               - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_57)))));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT___theResult___05F_fst_exp___05Fh1505 
            = (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_57));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__result_sign___05Fh1481 
            = (1U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__res_sign___05Fh483));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_56));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT__smaller_m___05Fh1422 
            = (0xffU & VL_SHIFTR_III(8,8,8, (0x80U 
                                             | (0x7fU 
                                                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg))), 
                                     (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_9__DOT____VdfgRegularize_he5b7ae78_0_57) 
                                               - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_8__DOT__psum_out_reg) 
                                                  >> 7U)))));
    }
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_9__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    if ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 8U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                        - (IData)(0x7fU))));
    } else if ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_mant___05Fh640 
            = (0x7fU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                        >> 7U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                         - (IData)(0x7fU)));
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_mant___05Fh640 
            = (0x7fU & (0x1ffU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___theResult___05F_snd___05Fh788)
                                    : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                  >> 7U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__final_exp_10___05Fh641 
            = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_3)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT___theResult___05F_fst___05Fh973)
                                              : (((
                                                   ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                                      - (IData)(0x7fU)) 
                                                     - (IData)(1U)) 
                                                    - (IData)(1U)) 
                                                   - (IData)(1U)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)))
                                          : ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                                 - (IData)(0x7fU)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U)))
                                      : (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                            - (IData)(0x7fU)) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))
                                  : ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                       - (IData)(0x7fU)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)))
                              : (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                                  - (IData)(0x7fU)) 
                                 - (IData)(1U))) : 
                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_9__DOT__exp_sum___05Fh634) 
                          - (IData)(0x7fU))));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute)
            ? ((IData)(1U) + vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)
            : 0U);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh30727)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh30936)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32529)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32706)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32883)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh33060)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh33237)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh33414)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31113)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31290)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31467)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31644)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31821)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh31998)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32175)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__res_sign___05Fh483 
        = (IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__weight_reg) 
                    >> 0xfU) ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__act_in_sign___05Fh32352)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_0__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_0)) 
              & (0x10U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_1__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_1)) 
              & (0x11U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_10__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_10)) 
              & (0x1aU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_11__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_11)) 
              & (0x1bU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_12__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_12)) 
              & (0x1cU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_13__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_13)) 
              & (0x1dU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_14__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_14)) 
              & (0x1eU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_15__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_15)) 
              & (0x1fU == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_2__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_2)) 
              & (0x12U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_3__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_3)) 
              & (0x13U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_4__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_4)) 
              & (0x14U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_5__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_5)) 
              & (0x15U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_6__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_6)) 
              & (0x16U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_7__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_7)) 
              & (0x17U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_8__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_8)) 
              & (0x18U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_9__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__WILL_FIRE_RL_capture_out) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__result_captured_9)) 
              & (0x19U == vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa2_collect_result 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024RDY_get_result) 
           & ((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_state)) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_sa1_complete)) 
                 & (0x8000001fU <= (0x80000000U ^ vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_sa1_collect_result 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__024RDY_get_result) 
           & ((0x8000001fU <= (0x80000000U ^ vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__cycle_count)) 
              & (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_state))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_1__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_12__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_13__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_14__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_15__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_2__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_3__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_4__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_5__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_6__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_7__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_8__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__weight_reg)))) 
           | ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_9)) 
              & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_11))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_9))
                                                ? 1U
                                                : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_9))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT__weight_reg))) 
           * (((0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_9)) 
               << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_9__DOT____VdfgRegularize_he5b7ae78_0_11)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7571[0U] 
        = ((((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x36U])));
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x28U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7571[(__Vilp8 
                                                                                + (IData)(1U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7566[__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363[0U] 
        = ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe9U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe9U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xeU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[9U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe9U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363[1U] 
        = ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeaU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeaU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xeU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeaU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363[2U] 
        = ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xeU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363[3U] 
        = ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0xeU == (0x1fU 
                                              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU])));
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x92U)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363[(__Vilp9 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343[__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5765[0U] 
        = ((((0x1bfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xdfU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xdfU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1beU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xdfU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5765[1U] 
        = ((((0x1c1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe0U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1c0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe0U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5765[2U] 
        = ((((0x1c3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe1U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe1U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1c2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe1U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5765[3U] 
        = ((((0x1c5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe2U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1c4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe2U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5765[4U] 
        = ((((0x1c7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe3U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe3U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x1c6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0xe3U])));
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x9bU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5765[(__Vilp10 
                                                                                + (IData)(5U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d5730[__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0U] 
        = ((((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x15aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36913[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36908[0x24U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0U] 
        = ((((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x15aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38902[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38897[0x24U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0U] 
        = ((((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x15aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27987[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27982[0x24U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0U] 
        = ((((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15aU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15aU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x56U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[2U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x15aU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x1fU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x20U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x21U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x22U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x23U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29985[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29980[0x24U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084[0U] 
        = ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfcU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfcU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfcU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084[1U] 
        = ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfdU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfdU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfdU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084[2U] 
        = ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084[3U] 
        = ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU])));
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0x7fU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084[(__Vilp11 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063[__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_2__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_0__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_1__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_2__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_0__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_1__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_0__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT____VdfgRegularize_he5b7ae78_0_26 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_0__DOT__tmp___05Fh1428) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242 
        = ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__IF_IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight___05FETC___05F_d233)) 
           < (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_1__DOT__smaller_m___05Fh1422));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_4 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_16 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_18 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_20 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_22 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT____VdfgRegularize_he5b7ae78_0_24 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_2__DOT__tmp___05Fh1428) 
                                          << 5U))));
}
