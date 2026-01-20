// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VmkTb_COP.h for the primary calling header

#include "VmkTb_COP__pch.h"
#include "VmkTb_COP___024root.h"

VL_INLINE_OPT void VmkTb_COP___024root___nba_sequent__TOP__108(VmkTb_COP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root___nba_sequent__TOP__108\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq17)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq18)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh14482)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_40)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq16) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq17) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq18)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_47_53_EQ_INV_compute_p_8_BIT___05FETC___05F_d654)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh7038)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_46_TO_39_38_UL_ETC___05F_d666)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_46_TO_39_38_ULT_compute_p_8___05FETC___05F_d655)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq16)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq40)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh7038))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh7062)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh7062) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_15)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_255)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_257)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_259)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_261)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_263)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_265)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_267)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_15)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_255)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_257)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_259)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_261)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_263)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_265)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_267)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6985))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq14)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq15)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh13607)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_45)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq13) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq14) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq15)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_63_25_EQ_INV_compute_p_8_BIT___05FETC___05F_d526)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh6133)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_62_TO_55_10_UL_ETC___05F_d538)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_62_TO_55_10_ULT_compute_p_8___05FETC___05F_d527)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq13)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq37)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh6133))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh6157)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh6157) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_1)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_241)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_243)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_245)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_247)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_249)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_251)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_253)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_1)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_241)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_243)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_245)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_247)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_249)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_251)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_253)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh6080))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq11)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq12)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh12732)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_50)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq10) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq11) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq12)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_79_98_EQ_INV_compute_p_8_BIT___05FETC___05F_d399)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh5228)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_78_TO_71_83_UL_ETC___05F_d411)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_78_TO_71_83_ULT_compute_p_8___05FETC___05F_d400)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq10)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq34)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh5228))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh5252)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh5252) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_3)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_227)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_229)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_231)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_233)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_235)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_237)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_239)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_3)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_227)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_229)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_231)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_233)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_235)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_237)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_239)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh5175))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq8)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq9)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh11857)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_55)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq7) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq8) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq9)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_95_70_EQ_INV_compute_p_8_BIT___05FETC___05F_d271)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh4323)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_94_TO_87_55_UL_ETC___05F_d283)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_94_TO_87_55_ULT_compute_p_8___05FETC___05F_d272)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq7)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq31)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh4323))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh4347)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh4347) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_5)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_213)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_215)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_217)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_219)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_221)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_223)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_225)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_5)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_213)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_215)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_217)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_219)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_221)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_223)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_225)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh4270))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq5)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq6)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh10982)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_20)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq4) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq5) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq6)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_111_43_EQ_INV_compute_p_8_BIT_ETC___05F_d144)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh3418)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_110_TO_103_28___05FETC___05F_d156)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_110_TO_103_28_ULT_compute_p___05FETC___05F_d145)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq4)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq28)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh3418))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh3442)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh3442) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_7)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_199)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_201)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_203)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_205)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_207)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_209)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_211)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_7)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_199)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_201)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_203)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_205)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_207)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_209)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_211)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh3365))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq2)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq3)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh9926)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_25)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq1) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1038_T_ETC___05Fq2) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_1030_T_ETC___05Fq3)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BIT_127_6_EQ_INV_compute_p_8_BIT_127___05F_d17)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh2513)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_pp_8_BITS_126_TO_119_ULT_ETC___05F_d29)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_pp_8_BITS_126_TO_119_ULT_compute_p_8_B_ETC___05F_d18)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_1039_1___05FETC___05Fq1)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq25)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh2513))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh2537)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh2537) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_9)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_185)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_187)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_189)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_191)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_193)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_195)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_197)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_9)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_185)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_187)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_189)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_191)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_193)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_195)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_197)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh2460))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq71)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq72)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh16232)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_30)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq70) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq71) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq72)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_15_848_EQ_INV_compute_p_8_BIT_ETC___05F_d1849)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh16487)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_14_TO_7_842_UL_ETC___05F_d1860)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_14_TO_7_842_ULT_compute_p_8___05FETC___05F_d1850)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq70)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx315_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq46)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh16487))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh16511)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh16511) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_12)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_171)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_173)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_175)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_177)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_179)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_181)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_183)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_12)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_171)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_173)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_175)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_177)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_179)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_181)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_183)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh16434))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq68)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq69)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh15357)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_35)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq67) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq68) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq69)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_31_730_EQ_INV_compute_p_8_BIT_ETC___05F_d1731)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh15612)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_30_TO_23_724_U_ETC___05F_d1742)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_30_TO_23_724_ULT_compute_p_8_ETC___05F_d1732)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq67)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx305_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq43)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh15612))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh15636)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh15636) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_11)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_157)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_159)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_161)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_163)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_165)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_167)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_169)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_11)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_157)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_159)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_161)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_163)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_165)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_167)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_169)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh15559))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq65)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq66)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh14482)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_40)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq64) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq65) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq66)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_47_613_EQ_INV_compute_p_8_BIT_ETC___05F_d1614)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh14737)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_46_TO_39_607_U_ETC___05F_d1625)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_46_TO_39_607_ULT_compute_p_8_ETC___05F_d1615)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq64)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx295_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq40)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh14737))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh14761)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh14761) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_10)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_143)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_145)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_147)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_149)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_151)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_153)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_155)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_10)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_143)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_145)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_147)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_149)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_151)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_153)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_155)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh14684))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq62)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq63)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh13607)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_45)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq61) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq62) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq63)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_63_495_EQ_INV_compute_p_8_BIT_ETC___05F_d1496)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh13862)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_62_TO_55_489_U_ETC___05F_d1507)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_62_TO_55_489_ULT_compute_p_8_ETC___05F_d1497)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq61)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx285_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq37)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh13862))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh13886)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh13886) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_8)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_129)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_131)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_133)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_135)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_137)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_139)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_141)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_8)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_129)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_131)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_133)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_135)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_137)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_139)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_141)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh13809))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq59)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq60)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh12732)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_50)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq58) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq59) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq60)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_79_378_EQ_INV_compute_p_8_BIT_ETC___05F_d1379)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh12987)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_78_TO_71_372_U_ETC___05F_d1390)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_78_TO_71_372_ULT_compute_p_8_ETC___05F_d1380)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq58)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx275_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq34)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh12987))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh13011)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh13011) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_6)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_115)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_117)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_119)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_121)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_123)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_125)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_127)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_6)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_115)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_117)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_119)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_121)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_123)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_125)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_127)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12934))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq56)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq57)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh11857)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_55)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq55) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq56) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq57)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_95_260_EQ_INV_compute_p_8_BIT_ETC___05F_d1261)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh12112)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_94_TO_87_254_U_ETC___05F_d1272)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_94_TO_87_254_ULT_compute_p_8_ETC___05F_d1262)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq55)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx265_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq31)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh12112))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh12136)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh12136) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_4)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_101)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_103)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_105)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_107)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_109)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_111)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_113)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_4)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_101)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_103)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_105)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_107)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_109)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_111)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_113)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh12059))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq53)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq54)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh10982)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_20)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq52) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq53) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq54)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_111_143_EQ_INV_compute_p_8_BI_ETC___05F_d1144)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh11237)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_110_TO_103_137_ETC___05F_d1155)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_110_TO_103_137_ULT_compute_p_ETC___05F_d1145)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq52)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx255_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq28)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh11237))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh11261)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh11261) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_2)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_87)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_89)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_91)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_93)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_95)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_97)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_99)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_2)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_87)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_89)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_91)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_93)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_95)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_97)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_99)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh11184))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__024put_data_data 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq50)) 
            & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq51)))
            ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__neg_b___05Fh9926)
            : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_25)
                ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq49) 
                    << 0xfU) | (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_526_TO_ETC___05Fq50) 
                                 << 7U) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BITS_518_TO_ETC___05Fq51)))
                : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BIT_127_026_EQ_INV_compute_p_8_BI_ETC___05F_d1027)
                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh10362)
                                 : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___0b1_CONCAT_IF_compute_ww_8_BITS_126_TO_119_020_ETC___05F_d1038)
                                     ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__compute_ww_8_BITS_126_TO_119_020_ULT_compute_p_ETC___05F_d1028)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_527_1_s_ETC___05Fq49)
                                         : (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__CASE_idx245_0_sub_input_fifoD_OUT_BIT_15_1_su_ETC___05Fq25)))
                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__result_sign___05Fh10362))) 
                               << 0xfU)) | ((0x100U 
                                             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309))
                                             ? ((0x7f80U 
                                                 & (((IData)(1U) 
                                                     + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh10386)) 
                                                    << 7U)) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                                      >> 1U)))
                                             : ((0x7f80U 
                                                 & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT___theResult___05F_fst_exp___05Fh10386) 
                                                     - 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_0)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_73)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_75)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_77)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_79)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_81)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_83)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_85)
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
                                                | (0x7fU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_0)
                                                       ? 
                                                      (0x1feU 
                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_73)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_75)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_77)
                                                              ? 
                                                             ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_79)
                                                               ? 
                                                              ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_81)
                                                                ? 
                                                               ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_83)
                                                                 ? 
                                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT____VdfgRegularize_h4eae033c_0_85)
                                                                  ? 0U
                                                                  : 
                                                                 (0xc0U 
                                                                  & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                                                     << 6U)))
                                                                 : 
                                                                (0xe0U 
                                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                                                    << 5U)))
                                                                : 
                                                               (0xf0U 
                                                                & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                                                   << 4U)))
                                                               : 
                                                              (0xf8U 
                                                               & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                                                  << 3U)))
                                                              : 
                                                             (0xfcU 
                                                              & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                                                 << 2U)))
                                                             : 
                                                            (0xfeU 
                                                             & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309) 
                                                                << 1U)))
                                                            : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309)) 
                                                          << 1U))
                                                       : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_unit__DOT__tmp___05Fh10309))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__DOT__empty_reg) 
           & (4U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0U] 
        = ((((0x2c3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x161U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x161U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x161U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[1U] 
        = ((((0x2c5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x162U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x162U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c4U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x162U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[2U] 
        = ((((0x2c7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x163U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x163U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c6U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x163U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[3U] 
        = ((((0x2c9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x164U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x164U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x164U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[4U] 
        = ((((0x2cbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x165U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x165U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2caU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x165U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4820[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_12__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_13__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_14__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_15__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_2__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_3__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_4__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_5__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_6__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_7__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_8__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__tmp___05Fh2907 
        = (0x1ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_stage2_data_BIT_37_THEN_stage2_data_BITS_36_ETC___05F_d259)
                      ? ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                         + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__smaller_m___05Fh2901))
                      : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0b1_CONCAT_IF_IF_stage2_data_BIT_37_THEN_stage_ETC___05F_d271)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__smaller_m___05Fh2901) 
                             - (0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)))
                          : ((0x80U | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__IF_IF_stage2_data_BIT_37_THEN_stage2_data_BITS_ETC___05F_d262)) 
                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT__smaller_m___05Fh2901)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__024can_accept_input 
        = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state)) 
            | (1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__state))) 
           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__lif__024RDY_load_and_step) 
              & (0x30U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_9__DOT__inputs_fed))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__div_result_wkv__024EN 
        = (((((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__busy)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__result_ready)) 
             & (0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_state))) 
            & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_a__024EN))) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2409));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_2)
            ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_2) 
              | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_3)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_2) 
           | ((0xeU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state)) 
              & (9U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__write_wait_counter))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__wb_state__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_1)
            ? 0U : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_2)
                     ? 0xeU : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FSEL_3)
                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_wb_state__024write_1___05FVAL_3)
                                : 0xaU)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_e__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_e__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_e__024put_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_e));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_f__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_f__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_f__024put_1___05FSEL_1) 
           | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_f));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_1___05FSEL_1)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2402));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_aa))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024ADDR = 0U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_aa) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_bb__024put_1___05FSEL_1)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2402));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_bb__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_bb))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_bb__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024ADDR = 0U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_bb) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_pp__024put_1___05FSEL_1)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2402));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_pp__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_pp))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_pp__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024ADDR = 0U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_pp) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_decay__024put_1___05FSEL_1)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2402));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_decay__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_td))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_decay__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024ADDR = 0U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_td) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_first__024put_1___05FSEL_1)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2402));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_first__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) 
                 | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tf))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_first__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_wait_data_load) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_tsc_load_data) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024ADDR = 0U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tf) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_1)) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load)) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_3)) 
                 & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0)) 
                    & ((5U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                       & (9U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_3) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0) 
                    | ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                       | ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmk)))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_k0_load) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_3) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_2___05FVAL_3;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024ADDR = 0U;
    } else if ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024ADDR = 0x100U;
    } else if ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024ADDR = 0x200U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmk) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_k__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_1)) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load)) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_3)) 
                 & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_r0)) 
                    & ((0x1dU != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                       & (0x21U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_3) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_r0) 
                    | ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                       | ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmr)))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_3) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_2___05FVAL_3;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_r0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024ADDR = 0U;
    } else if ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024ADDR = 0x100U;
    } else if ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024ADDR = 0x200U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmr) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_r__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_1)) 
           & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load)) 
              & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_3)) 
                 & ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_v0)) 
                    & ((0x11U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                       & (0x15U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_3) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_v0) 
                    | ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                       | ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                          | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmv)))))));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_v0_load) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_3) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_2___05FVAL_3;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_v0) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024ADDR = 0U;
    } else if ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024ADDR = 0x100U;
    } else if ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024ADDR = 0x200U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_tmv) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_mix_v__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_1)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2404));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_2) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_3) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_2___05FVAL_3;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_4) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024ADDR = 0U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_5) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024ADDR = 0x100U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_6) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024ADDR = 0x200U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_d) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_d__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2401) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_3) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_3) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_3) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_57) 
                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0) 
                                | ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                   | ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                      | ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_64) 
                                            | ((9U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                               | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_d))))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_state__024put_1___05FSEL_1)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2404));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_state__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_2) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_3) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_2___05FVAL_3;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_4) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024ADDR = 0U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_5) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024ADDR = 0x100U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_6) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024ADDR = 0x200U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_state) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_state__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_state__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2401) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_3) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_3) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_3) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_57) 
                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0) 
                                | ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                   | ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                      | ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_64) 
                                            | ((9U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                               | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_state))))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024WE 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_x__024put_1___05FSEL_1)) 
           & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2404));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_x__024put_1___05FSEL_1) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__read_addr___05Fh12191578;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_2) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_addr;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_3) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_2___05FVAL_3;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_4) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024ADDR = 0U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_5) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024ADDR = 0x100U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_d__024put_1___05FSEL_6) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024ADDR = 0x200U;
    } else if (vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_x) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024DI 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_3___05FVAL_4;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024ADDR 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_aa__024put_2___05FVAL_4;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024DI = 0xaaaaU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024ADDR = 0x2aaU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_x__024EN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_x__024put_1___05FSEL_1) 
           | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wait_r0_load) 
              | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_2401) 
                 | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_r__024put_1___05FSEL_3) 
                    | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_v__024put_1___05FSEL_3) 
                       | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__MUX_bram_time_mix_k__024put_1___05FSEL_3) 
                          | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_57) 
                             | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_load_k0) 
                                | ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                   | ((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                      | ((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                         | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT____VdfgRegularize_hc77dd2ce_0_64) 
                                            | ((9U 
                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__state)) 
                                               | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__WILL_FIRE_RL_wb_execute_write_x))))))))))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x174U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x174U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1[0x174U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36776[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d36771[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x174U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x174U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_e2[0x174U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38772[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38767[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x174U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x174U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e1_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1[0x174U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27850[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d27845[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[0U] 
        = ((((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x174U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x174U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x5dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e1_collected))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__e2_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_cts_e2[0x174U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29855[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d29850[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__max_unit__024findMax[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_ww_chunk[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x24U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x25U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x26U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x27U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x28U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x29U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x2aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x2bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x2cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x2dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x2eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024D_IN[0x2fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__024feed_input_pp_chunk[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_exp___05Fh2199 
        = ((0x8000U >= (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
            ? 0U : ((0x80ffU > (0x8000U ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267)))
                     ? (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT___127_MINUS_IF_IF_s1_zc1_15_EQ_0x0_16_OR_0_CONCA_ETC___05F_d267))
                     : 0xffU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0U] 
        = ((((0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x164U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x164U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[4U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x164U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[1U] 
        = ((((0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x165U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x165U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x165U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[2U] 
        = ((((0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x166U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x166U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x166U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[3U] 
        = ((((0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x167U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x167U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x2cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x167U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10551[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10530[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1__024EN)
            ? (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__feed_index)))
            : 0U);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__024EN_getResult 
        = (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__result_valid) 
                    & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_1__DOT__result_valid)) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_2__DOT__result_valid)) 
                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_3__DOT__result_valid)) 
                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_4__DOT__result_valid)) 
                & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_5__DOT__result_valid)) 
               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_6__DOT__result_valid)) 
              & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_7__DOT__result_valid)) 
             & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__busy)) 
            & (~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__sigmoid_module__DOT__sigmoid_units_0__DOT__stage1__024EN))) 
           & (0x60U > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sigmoid__DOT__collect_index)));
    if (vlSelfRef.RST_N) {
        if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_0__024EN_compute) {
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__psum_out_reg 
                = (((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_57)) 
                    & (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_56)))
                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__psum_out_reg)
                    : ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__psum_out_reg))))
                        ? (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__res_sign___05Fh483) 
                            << 0xfU) | ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_12)
                                         ? 0U : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213)))
                        : ((0x8000U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230)
                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__result_sign___05Fh1481)
                                         : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___0b1_CONCAT_IF_IF_weight_reg_BITS_14_TO_7_EQ_0___05FETC___05F_d242)
                                             ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231)
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__res_sign___05Fh483)
                                                 : 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_10__DOT__psum_out_reg) 
                                                 >> 0xfU))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__result_sign___05Fh1481))) 
                                       << 0xfU)) | 
                           ((0x100U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428))
                             ? ((0x7f80U & (((IData)(1U) 
                                             + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___theResult___05F_fst_exp___05Fh1505)) 
                                            << 7U)) 
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428) 
                                            >> 1U)))
                             : ((0x7f80U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT___theResult___05F_fst_exp___05Fh1505) 
                                             - ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                                 ? 
                                                ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                  ? 
                                                 ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_26)
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
                                | (0x7fU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_4)
                                             ? (0x1feU 
                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_14)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_16)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_18)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_20)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_22)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_24)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT____VdfgRegularize_he5b7ae78_0_26)
                                                           ? 0U
                                                           : 
                                                          (0xc0U 
                                                           & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428) 
                                                              << 6U)))
                                                          : 
                                                         (0xe0U 
                                                          & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428) 
                                                             << 5U)))
                                                         : 
                                                        (0xf0U 
                                                         & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428) 
                                                            << 4U)))
                                                        : 
                                                       (0xf8U 
                                                        & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428) 
                                                           << 3U)))
                                                       : 
                                                      (0xfcU 
                                                       & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428) 
                                                          << 2U)))
                                                      : 
                                                     (0xfeU 
                                                      & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428) 
                                                         << 1U)))
                                                     : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428)) 
                                                   << 1U))
                                             : (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__tmp___05Fh1428))))))));
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_0__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_1__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_10__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_12__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_13__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_14__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_15__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_2__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_3__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_4__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_5__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_6__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_7__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_8__DOT__activation_out_reg;
            vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__activation_out_reg 
                = vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_9__DOT__activation_out_reg;
        }
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_1_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_2_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_3_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_4_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_5_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_6_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_7_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_8_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_9_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_0_11__DOT__psum_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_0__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_1__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_10__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_11__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_12__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_13__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_14__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_15__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_2__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_3__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_4__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_5__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_6__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_7__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_8__DOT__activation_out_reg = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_10_9__DOT__activation_out_reg = 0U;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__psum_out_reg) 
                     >> 0xfU)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__weight_reg_BIT_15_25_XOR_compute_act_in_BIT_15_ETC___05F_d230 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__res_sign___05Fh483) 
           == (1U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__psum_out_reg) 
                     >> 0xfU)));
    if (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_12) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_56 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_57 = 0U;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_56 
            = (0x7fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT____VdfgRegularize_he5b7ae78_0_57 
            = (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213) 
                        >> 7U));
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_3 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_18 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_20 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_22 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_24 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_26 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_28 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_30 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_32 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_34 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_36 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_38 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_40 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_a_abs_3_BITS_14_TO_7_8_EQ_0_9___05FETC___05F_d65 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_5 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 0xdU)) & (0U != (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_43 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 0xcU)) & (0U != (0x7fffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_45 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 0xbU)) & (0U != (0x7ffeU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                              << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_47 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 0xaU)) & (0U != (0x7ffcU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                              << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_49 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 9U)) & (0U != (0x7ff8U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_51 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 8U)) & (0U != (0x7ff0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_53 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 7U)) & (0U != (0x7fe0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_55 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 6U)) & (0U != (0x7fc0U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_57 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 5U)) & (0U != (0x7f80U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 7U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_59 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 4U)) & (0U != (0x7f00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 8U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_61 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 3U)) & (0U != (0x7e00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 9U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_63 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 2U)) & (0U != (0x7c00U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 0xaU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT____VdfgRegularize_h241dd21f_4_65 
        = ((~ (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
               >> 1U)) & (0U != (0x7800U & (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT___0_CONCAT_NOT_s1_b_abs_63_BITS_14_TO_7_66_EQ_0___05FETC___05F_d275 
                                            << 0xbU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index__024D_IN 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1__024EN)
            ? (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__feed_index)))
            : 0U);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__s1_result_sign__024D_IN 
        = (1U & VL_REDXOR_64((0x100010000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1)));
    if ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                       >> 7U)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__val_mantissa___05Fh1029 
            = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 6U))) ? ((1U & (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                         >> 5U)))
                                           ? ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0U
                                                     : 1U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 1U
                                                     : 2U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 2U
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 3U
                                                     : 4U)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 4U
                                                     : 5U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 5U
                                                     : 6U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 6U
                                                     : 7U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 7U
                                                     : 8U))))
                                           : ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 9U
                                                    : 0xaU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0xbU
                                                     : 0xcU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0xcU
                                                     : 0xdU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0xdU
                                                     : 0xeU)
                                                    : 0xfU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x10U
                                                     : 0x11U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x11U
                                                     : 0x12U)))))
                : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                  >> 5U))) ? ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 4U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x12U
                                                     : 0x13U)
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x15U
                                                     : 0x16U)
                                                    : 0x17U))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x18U
                                                     : 0x19U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x19U
                                                     : 0x1aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x1bU
                                                     : 0x1cU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x1cU
                                                     : 0x1dU))))
                    : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                      >> 4U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x1eU
                                                     : 0x1fU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x1fU
                                                     : 0x20U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x21U
                                                     : 0x22U)
                                                    : 0x23U))
                        : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                          >> 3U))) ? 
                           ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                           >> 2U)))
                             ? ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                               >> 1U)))
                                 ? 0x24U : 0x25U) : 
                            ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                            >> 1U)))
                              ? 0x26U : 0x27U)) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 2U)))
                                                    ? 0x28U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                                >> 1U)))
                                                     ? 0x29U
                                                     : 0x2aU))))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__CASE_stage1_BITS_7_TO_1_0_127_1_126_2_126_3_12_ETC___05Fq1 = 0x7eU;
    } else if ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 6U)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__val_mantissa___05Fh1029 
            = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 5U))) ? ((1U & (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                         >> 4U)))
                                           ? ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 3U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x2bU
                                                    : 0x2cU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x2dU
                                                    : 0x2eU))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x2fU
                                                    : 0x30U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x31U
                                                    : 0x32U)))
                                           : ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 3U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x33U
                                                    : 0x34U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x35U
                                                    : 0x36U))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x37U
                                                    : 0x38U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x39U
                                                    : 0x3aU))))
                : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                  >> 4U))) ? ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 3U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x3bU
                                                    : 0x3cU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x3dU
                                                    : 0x3eU))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x3fU
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x41U
                                                    : 0x43U)))
                    : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                      >> 3U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x44U
                                                    : 0x45U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                               >> 1U)))
                                                    ? 0x46U
                                                    : 0x47U))
                        : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                          >> 2U))) ? 
                           ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                           >> 1U)))
                             ? 0x49U : 0x4aU) : ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 1U)))
                                                  ? 0x4bU
                                                  : 0x4cU)))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__CASE_stage1_BITS_7_TO_1_0_127_1_126_2_126_3_12_ETC___05Fq1 = 0x7eU;
    } else if ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 5U)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__val_mantissa___05Fh1029 
            = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 1U)))
                                                   ? 0x4eU
                                                   : 0x4fU)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 1U)))
                                                   ? 0x50U
                                                   : 0x52U))
                                           : ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 1U)))
                                                   ? 0x53U
                                                   : 0x54U)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 1U)))
                                                   ? 0x56U
                                                   : 0x57U)))
                : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 1U)))
                                                   ? 0x59U
                                                   : 0x5aU)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 1U)))
                                                   ? 0x5bU
                                                   : 0x5dU))
                    : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                              >> 1U)))
                                                   ? 0x5eU
                                                   : 0x60U)
                        : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                          >> 1U))) ? 0x62U
                            : 0x63U))));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__CASE_stage1_BITS_7_TO_1_0_127_1_126_2_126_3_12_ETC___05Fq1 = 0x7eU;
    } else if ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 4U)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__val_mantissa___05Fh1029 
            = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 3U))) ? ((1U & (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                         >> 2U)))
                                           ? ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 1U)))
                                               ? 0x65U
                                               : 0x66U)
                                           : ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 1U)))
                                               ? 0x68U
                                               : 0x6aU))
                : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                  >> 2U))) ? ((1U & (IData)(
                                                            (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                             >> 1U)))
                                               ? 0x6bU
                                               : 0x6dU)
                    : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                      >> 1U))) ? 0x6fU
                        : 0x70U)));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__CASE_stage1_BITS_7_TO_1_0_127_1_126_2_126_3_12_ETC___05Fq1 = 0x7eU;
    } else if ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 3U)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__val_mantissa___05Fh1029 
            = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 2U))) ? ((1U & (IData)(
                                                        (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                                         >> 1U)))
                                           ? 0x72U : 0x74U)
                : ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                                  >> 1U))) ? 0x76U : 0x78U));
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__CASE_stage1_BITS_7_TO_1_0_127_1_126_2_126_3_12_ETC___05Fq1 = 0x7eU;
    } else if ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 2U)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__val_mantissa___05Fh1029 
            = ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 1U))) ? 0x7aU : 0x7cU);
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__CASE_stage1_BITS_7_TO_1_0_127_1_126_2_126_3_12_ETC___05Fq1 = 0x7eU;
    } else if ((1U & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__stage1 
                              >> 1U)))) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__val_mantissa___05Fh1029 = 0x7eU;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__CASE_stage1_BITS_7_TO_1_0_127_1_126_2_126_3_12_ETC___05Fq1 = 0x7eU;
    } else {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__val_mantissa___05Fh1029 = 0U;
        vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__CASE_stage1_BITS_7_TO_1_0_127_1_126_2_126_3_12_ETC___05Fq1 = 0x7fU;
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15143[0U] 
        = ((((0x2f2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x178U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x178U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_aa__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_aa[0x178U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15143[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15143[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15143[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15143[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15143[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15143[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15143[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15138[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17065[0U] 
        = ((((0x2f2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x178U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x178U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_bb__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_bb[0x178U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17065[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17065[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17065[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17065[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17065[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17065[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17065[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17060[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12469[0U] 
        = ((((0x2f2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x178U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x178U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_pp__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_pp[0x178U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12469[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12469[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12469[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12469[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12469[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12469[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12469[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12462[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20909[0U] 
        = ((((0x2f2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x178U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x178U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_decay__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_decay[0x178U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20909[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20909[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20909[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20909[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20909[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20909[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20909[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20904[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0U] 
        = ((((0x87U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x86U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x43U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[1U] 
        = ((((0x89U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x88U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x44U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[2U] 
        = ((((0x8bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x8aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x45U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[3U] 
        = ((((0x8dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x8cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x46U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[4U] 
        = ((((0x8fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x8eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x47U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46194[0x1eU] 
        = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46159[0x19U]);
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18987[0U] 
        = ((((0x2f2U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x178U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x178U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2f1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_load_addr))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__bram_time_first__DOT__DO_R)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_time_first[0x178U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18987[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18987[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18987[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18987[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18987[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18987[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18987[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d18982[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_0__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
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
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_0__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_0__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_1__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_1__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_1__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_10__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_10__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_10__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_11__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_11__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_11__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_12__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_12__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_12__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_12__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_12__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_13__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_13__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_13__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_13__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_13__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_14__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_14__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_14__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_14__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT__IF_weight_reg_BITS_14_TO_7_EQ_0_AND_weight_reg_ETC___05F_d231 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_15__DOT____VdfgRegularize_he5b7ae78_0_57) 
           < (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_15_14__DOT__psum_out_reg) 
                       >> 7U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__IF_IF_0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ___05FETC___05F_d213 
        = ((IData)((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641) 
                     >> 9U) | (0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641))))
            ? ((0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641))
                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_mant___05Fh640)
                : 0U) : ((0xffU > (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641))
                          ? ((0x7f80U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_exp_10___05Fh641) 
                                         << 7U)) | (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_14_15__DOT__final_mant___05Fh640))
                          : 0x7f80U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_15__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__res_sign___05Fh483 
        = (1U & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__weight_reg) 
                  ^ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg)) 
                 >> 0xfU));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT____VdfgRegularize_he5b7ae78_0_12 
        = ((IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__weight_reg)))) 
           | (IData)((0U == (0x7fffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_15__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_15__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_2__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_2__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_2__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_3__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_3__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_3__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_4__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_4__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_4__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_5__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_5__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_5__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_6__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_6__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_6__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_7__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_7__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_7__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_8__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_8__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_8__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___theResult___05F_snd___05Fh788 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_41)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_43)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_45)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_47)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_49)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_38)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT___theResult___05F_fst___05Fh973 
        = (0x3ffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_51)
                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_28)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_30)
                              ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_32)
                                  ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_34)
                                      ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_36)
                                          ? (((((((
                                                   ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__exp_sum___05Fh634) 
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
                                             - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT____VdfgRegularize_he5b7ae78_0_38))
                                          : (((((((
                                                   ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__exp_sum___05Fh634) 
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
                                      : ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__exp_sum___05Fh634) 
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
                                  : (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__exp_sum___05Fh634) 
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
                              : ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__exp_sum___05Fh634) 
                                         - (IData)(0x7fU)) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)) 
                                      - (IData)(1U)) 
                                     - (IData)(1U)) 
                                    - (IData)(1U)) 
                                   - (IData)(1U)) - (IData)(1U)) 
                                 - (IData)(1U))) : 
                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__exp_sum___05Fh634) 
                                 - (IData)(0x7fU)) 
                                - (IData)(1U)) - (IData)(1U)) 
                              - (IData)(1U)) - (IData)(1U)) 
                            - (IData)(1U)) - (IData)(1U)) 
                          - (IData)(1U))) : ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_13_9__DOT__exp_sum___05Fh634) 
                                                   - (IData)(0x7fU)) 
                                                  - (IData)(1U)) 
                                                 - (IData)(1U)) 
                                                - (IData)(1U)) 
                                               - (IData)(1U)) 
                                              - (IData)(1U)) 
                                             - (IData)(1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__exp_sum___05Fh634 
        = (0x1ffU & (((0U == (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__weight_reg) 
                                       >> 7U))) ? 1U
                       : (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__weight_reg) 
                                   >> 7U))) + ((0U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__activation_out_reg) 
                                                    >> 7U)))
                                                ? 1U
                                                : (0xffU 
                                                   & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__activation_out_reg) 
                                                      >> 7U)))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT___0_CONCAT_NOT_weight_reg_BITS_14_TO_7_EQ_0_3_CO_ETC___05F_d19 
        = ((((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__weight_reg) 
                              >> 7U))) << 7U) | (0x7fU 
                                                 & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_12_9__DOT__weight_reg))) 
           * (((0U != (0xffU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__activation_out_reg) 
                                >> 7U))) << 7U) | (0x7fU 
                                                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa__DOT__pe_array_11_9__DOT__activation_out_reg))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_110 
        = (IData)(((0U == (0x30U & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__abs_val___05Fh5617))) 
                   & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT____VdfgRegularize_ha845b8a3_6_109)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[0U] 
        = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_output_row_idx))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_accumulator[7U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output[0x4fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[1U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[2U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[3U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[4U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7443[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7437[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40857[0U] 
        = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14dU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14dU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x14U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xdU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40857[1U] 
        = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14eU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14eU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x14U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40857[2U] 
        = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14fU] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14fU] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x14U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x14fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40857[3U] 
        = ((((0x15U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
              ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                               >> 0x10U)) : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x150U] 
                                              << 0x10U) 
                                             | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x150U] 
                                                >> 0x10U))) 
            << 0x10U) | (0xffffU & ((0x15U == (0x1fU 
                                               & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                     ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                     : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x150U])));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x2eU)) {
        vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40857[(__Vilp1 
                                                                                + (IData)(4U))] 
            = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40836[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_1__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_2__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_3__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_4__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_5__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_6__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_7__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_0__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_1__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_2__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_3__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_4__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_5__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_6__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_input_fifo__024DEQ 
        = ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit1__DOT__exp_units_0__DOT__stage1__024EN) 
           & (3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__sub_batch_idx)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_exp_eff___05Fh989 
        = ((0U == (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage1 
                            >> 8U))) ? 1U : (0xffU 
                                             & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage1 
                                                >> 8U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__a_full_mant___05Fh986 
        = (((0U != (0xffU & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage1 
                             >> 8U))) << 7U) | (0x7fU 
                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__exp_unit2__DOT__exp_units_7__DOT__stage1 
                                                   >> 1U)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0U] 
        = ((((0x2b9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15cU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15cU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2b8U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15cU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[1U] 
        = ((((0x2bbU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15dU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15dU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2baU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15dU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[2U] 
        = ((((0x2bdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15eU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15eU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2bcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15eU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[3U] 
        = ((((0x2bfU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15fU] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15fU] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2beU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x15fU])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[4U] 
        = ((((0x2c1U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
              ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
              : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x160U] 
                  << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x160U] 
                               >> 0x10U))) << 0x10U) 
           | (0xffffU & ((0x2c0U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__collect_index))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__divider__DOT__result_data)
                          : vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__vec_result[0x160U])));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[5U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[6U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[1U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[7U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[2U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[8U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[3U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[9U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[4U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0xaU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[5U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0xbU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[6U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0xcU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[7U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0xdU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[8U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0xeU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[9U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0xfU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xaU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x10U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xbU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x11U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xcU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x12U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xdU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x13U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xeU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x14U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0xfU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x15U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x10U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x16U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x11U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x17U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x12U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x18U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x13U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x19U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x14U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x1aU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x15U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x1bU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x16U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x1cU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x17U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x1dU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x18U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x1eU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x19U];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x1fU] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1aU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x20U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1bU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x21U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1cU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x22U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1dU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4890[0x23U] 
        = vlSelfRef.mkTb_COP__DOT__cop__DOT__divider__DOT__IF_collect_index_633_EQ_767_637_THEN_divider_g_ETC___05F_d4855[0x1eU];
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__final_exp_10___05Fh1448 
        = (0x3ffU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)
                      ? ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                        - (IData)(0x7fU)))
                      : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                             - (IData)(0x7fU)) : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80)
                                                              ? 
                                                             (((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                              - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82))
                                                              : 
                                                             (((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                             : 
                                                            ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                            : 
                                                           (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                           : 
                                                          ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                                   - (IData)(0x7fU)) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(1U)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)))
                                                          : 
                                                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                                 - (IData)(0x7fU)) 
                                                                - (IData)(1U)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)))
                                                         : 
                                                        ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                               - (IData)(0x7fU)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)))
                                                        : 
                                                       (((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                             - (IData)(0x7fU)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)))
                                                       : 
                                                      ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                           - (IData)(0x7fU)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)))
                                                      : 
                                                     (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                         - (IData)(0x7fU)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)))
                                                     : 
                                                    ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                       - (IData)(0x7fU)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)))
                                                    : 
                                                   (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                     - (IData)(0x7fU)) 
                                                    - (IData)(1U)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                   - (IData)(0x7fU))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F_snd___05Fh1595 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_0__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__final_exp_10___05Fh1448 
        = (0x3ffU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)
                      ? ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                        - (IData)(0x7fU)))
                      : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                             - (IData)(0x7fU)) : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80)
                                                              ? 
                                                             (((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                              - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82))
                                                              : 
                                                             (((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                             : 
                                                            ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                            : 
                                                           (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                           : 
                                                          ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                                   - (IData)(0x7fU)) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(1U)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)))
                                                          : 
                                                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                                 - (IData)(0x7fU)) 
                                                                - (IData)(1U)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)))
                                                         : 
                                                        ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                               - (IData)(0x7fU)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)))
                                                        : 
                                                       (((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                             - (IData)(0x7fU)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)))
                                                       : 
                                                      ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                           - (IData)(0x7fU)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)))
                                                      : 
                                                     (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                         - (IData)(0x7fU)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)))
                                                     : 
                                                    ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                       - (IData)(0x7fU)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)))
                                                    : 
                                                   (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                     - (IData)(0x7fU)) 
                                                    - (IData)(1U)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                   - (IData)(0x7fU))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F_snd___05Fh1595 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_1__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__final_exp_10___05Fh1448 
        = (0x3ffU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)
                      ? ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                        - (IData)(0x7fU)))
                      : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                             - (IData)(0x7fU)) : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80)
                                                              ? 
                                                             (((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                              - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82))
                                                              : 
                                                             (((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                             : 
                                                            ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                            : 
                                                           (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                           : 
                                                          ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                                   - (IData)(0x7fU)) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(1U)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)))
                                                          : 
                                                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                                 - (IData)(0x7fU)) 
                                                                - (IData)(1U)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)))
                                                         : 
                                                        ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                               - (IData)(0x7fU)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)))
                                                        : 
                                                       (((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                             - (IData)(0x7fU)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)))
                                                       : 
                                                      ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                           - (IData)(0x7fU)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)))
                                                      : 
                                                     (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                         - (IData)(0x7fU)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)))
                                                     : 
                                                    ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                       - (IData)(0x7fU)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)))
                                                    : 
                                                   (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                     - (IData)(0x7fU)) 
                                                    - (IData)(1U)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                   - (IData)(0x7fU))))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F_snd___05Fh1595 
        = (0xfffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60)
                        ? (0x7ffeU & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62)
                                        ? (0x3ffeU 
                                           & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64)
                                                ? (0x1ffeU 
                                                   & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66)
                                                        ? 
                                                       (0xffeU 
                                                        & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68)
                                                             ? 
                                                            (0x7feU 
                                                             & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70)
                                                                  ? 
                                                                 (0x3feU 
                                                                  & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72)
                                                                       ? 
                                                                      (0x1feU 
                                                                       & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74)
                                                                            ? 
                                                                           (0xfeU 
                                                                            & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76)
                                                                                 ? 
                                                                                (0x7eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78)
                                                                                 ? 
                                                                                (0x3eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80)
                                                                                 ? 
                                                                                (0x1eU 
                                                                                & (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82)
                                                                                 ? 
                                                                                (0xeU 
                                                                                & (vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                                << 1U))
                                                                                 : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                               << 1U))
                                                                            : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                          << 1U))
                                                                       : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                     << 1U))
                                                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                                << 1U))
                                                             : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                           << 1U))
                                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                                      << 1U))
                                                : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                              << 1U))
                                        : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                                      << 1U)) : vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37) 
                      << 1U));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT____VdfgRegularize_h799d9463_0_19 
        = (IData)((0ULL == (0x7fff00000ULL & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT___theResult___05F___05Fh4158 
        = (0xffU & (((0xffU & (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf 
                                       >> 0x1bU))) 
                     <= (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214))
                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__SEL_ARR_v_t_0_6_BITS_14_TO_7_65_v_t_1_8_BITS_1_ETC___05F_d214)
                     : (IData)((vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_10__DOT__lif__DOT__conf 
                                >> 0x1bU))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_14 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
               >> 7U)) & (0U != (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907)));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_31 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
               >> 6U)) & (0U != (0xffU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_33 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
               >> 5U)) & (0U != (0xfeU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 1U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_35 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
               >> 4U)) & (0U != (0xfcU & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 2U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_37 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
               >> 3U)) & (0U != (0xf8U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 3U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_39 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
               >> 2U)) & (0U != (0xf0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 4U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_41 
        = ((~ ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
               >> 1U)) & (0U != (0xe0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                                          << 5U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_43 
        = ((~ (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907)) 
           & (0U != (0xc0U & ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__tmp___05Fh2907) 
                              << 6U))));
    vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__final_exp_10___05Fh1448 
        = (0x3ffU & ((0x8000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)
                      ? ((IData)(1U) + ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                        - (IData)(0x7fU)))
                      : ((0x4000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT___0_CONCAT_NOT_inv_tau_cached_4_BITS_14_TO_7_0_E_ETC___05F_d37)
                          ? ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                             - (IData)(0x7fU)) : ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_13)
                                                   ? 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_60)
                                                    ? 
                                                   ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_62)
                                                     ? 
                                                    ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_64)
                                                      ? 
                                                     ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_66)
                                                       ? 
                                                      ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_68)
                                                        ? 
                                                       ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_70)
                                                         ? 
                                                        ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_72)
                                                          ? 
                                                         ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_74)
                                                           ? 
                                                          ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_76)
                                                            ? 
                                                           ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_78)
                                                             ? 
                                                            ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_80)
                                                              ? 
                                                             (((((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                              - (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT____VdfgRegularize_h799d9463_0_82))
                                                              : 
                                                             (((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                             : 
                                                            ((((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                            : 
                                                           (((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
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
                                                           : 
                                                          ((((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                                   - (IData)(0x7fU)) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(1U)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)))
                                                          : 
                                                         (((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                                 - (IData)(0x7fU)) 
                                                                - (IData)(1U)) 
                                                               - (IData)(1U)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)))
                                                         : 
                                                        ((((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                               - (IData)(0x7fU)) 
                                                              - (IData)(1U)) 
                                                             - (IData)(1U)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)))
                                                        : 
                                                       (((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                             - (IData)(0x7fU)) 
                                                            - (IData)(1U)) 
                                                           - (IData)(1U)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)))
                                                       : 
                                                      ((((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                           - (IData)(0x7fU)) 
                                                          - (IData)(1U)) 
                                                         - (IData)(1U)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)))
                                                      : 
                                                     (((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                         - (IData)(0x7fU)) 
                                                        - (IData)(1U)) 
                                                       - (IData)(1U)) 
                                                      - (IData)(1U)))
                                                     : 
                                                    ((((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                       - (IData)(0x7fU)) 
                                                      - (IData)(1U)) 
                                                     - (IData)(1U)))
                                                    : 
                                                   (((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                     - (IData)(0x7fU)) 
                                                    - (IData)(1U)))
                                                   : 
                                                  ((IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__lif__DOT__neurons_11__DOT__lif__DOT__exp_sum___05Fh1441) 
                                                   - (IData)(0x7fU))))));
}
